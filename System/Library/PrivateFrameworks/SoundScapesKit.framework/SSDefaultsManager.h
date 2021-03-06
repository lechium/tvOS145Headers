/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults;

@interface SSDefaultsManager : NSObject {

	NSUserDefaults* _SSDefaults;

}

@property (setter=SDefaults,nonatomic,retain) NSUserDefaults * SSDefaults;              //@synthesize SSDefaults=_SSDefaults - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)objectForDefault:(id)arg1 ;
-(void)setObject:(id)arg1 forDefault:(id)arg2 ;
-(void)removeObjectForDefault:(id)arg1 ;
-(NSUserDefaults *)SSDefaults;
-(void)setSSDefaults:(NSUserDefaults *)arg1 ;
@end

