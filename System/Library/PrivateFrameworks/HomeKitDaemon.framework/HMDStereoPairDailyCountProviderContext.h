/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDStereoPairDailyCountProviderContext.h>
@class HMDHomeMediaSystemHandler, HMDLogEventDailyScheduler;


@protocol HMDStereoPairDailyCountProviderContext <HMDLogEventSubmitting>
@property (__weak,readonly) HMDHomeMediaSystemHandler * mediaSystemController; 
@property (__weak,readonly) HMDLogEventDailyScheduler * scheduler; 
@required
-(HMDLogEventDailyScheduler *)scheduler;
-(HMDHomeMediaSystemHandler *)mediaSystemController;
-(void)registerLogEventDailyProvider:(id)arg1;

@end


@class HMDHomeMediaSystemHandler, HMDLogEventDailyScheduler, HMDLogEventDispatcher, NSString;

@interface HMDStereoPairDailyCountProviderContext : NSObject <HMDStereoPairDailyCountProviderContext> {

	HMDHomeMediaSystemHandler* _mediaSystemController;

}

@property (__weak,readonly) HMDHomeMediaSystemHandler * mediaSystemController;              //@synthesize mediaSystemController=_mediaSystemController - In the implementation block
@property (__weak,readonly) HMDLogEventDailyScheduler * scheduler; 
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMDLogEventDailyScheduler *)scheduler;
-(void)submitLogEvent:(id)arg1 ;
-(HMDHomeMediaSystemHandler *)mediaSystemController;
-(void)registerLogEventDailyProvider:(id)arg1 ;
-(id)initWithMediaSystemController:(id)arg1 ;
@end

