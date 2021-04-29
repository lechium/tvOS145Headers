/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPActionSupport;
@class NSObject, MCAction;

@interface MPAction : NSObject <NSCopying> {

	NSObject*<MPActionSupport> _parentObject;
	MCAction* _action;
	NSObject* _targetObject;

}

@property (nonatomic,retain) NSObject * targetObject;              //@synthesize targetObject=_targetObject - In the implementation block
+(id)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)key;
-(id)parent;
-(void)setAction:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(NSObject *)targetObject;
-(id)parentDocument;
-(void)configureTarget;
-(void)setTargetObject:(NSObject *)arg1 ;
@end

