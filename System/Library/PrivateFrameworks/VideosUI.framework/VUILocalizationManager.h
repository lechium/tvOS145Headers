/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface VUILocalizationManager : NSObject {

	NSDictionary* _overideLocDict;

}

@property (retain) NSDictionary * overideLocDict;              //@synthesize overideLocDict=_overideLocDict - In the implementation block
+(id)sharedInstance;
-(id)localizedStringForKey:(id)arg1 ;
-(NSDictionary *)overideLocDict;
-(void)setOverideLocDict:(NSDictionary *)arg1 ;
-(id)localizedStringForKey:(id)arg1 withCounts:(id)arg2 ;
-(void)updateWithJSDictionary:(id)arg1 ;
@end

