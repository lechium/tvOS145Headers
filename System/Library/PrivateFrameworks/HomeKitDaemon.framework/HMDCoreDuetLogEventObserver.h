/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@class HMDDuetEventManager, NSString;

@interface HMDCoreDuetLogEventObserver : HMFObject <HMDLogEventObserver> {

	HMDDuetEventManager* _duetEventManager;

}

@property (readonly) HMDDuetEventManager * duetEventManager;              //@synthesize duetEventManager=_duetEventManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
-(HMDDuetEventManager *)duetEventManager;
-(id)initWithDuetEventManager:(id)arg1 ;
@end

