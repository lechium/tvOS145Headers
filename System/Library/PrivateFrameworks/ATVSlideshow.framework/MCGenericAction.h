/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAction.h>

@class NSMutableDictionary, NSDictionary;

@interface MCGenericAction : MCAction {

	NSMutableDictionary* _attributes;

}

@property (copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)genericActionForTargetPlugObjectID:(id)arg1 withAttributes:(id)arg2 ;
-(id)description;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

