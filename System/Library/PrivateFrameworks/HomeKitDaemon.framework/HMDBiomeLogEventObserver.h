/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>

@protocol HMDBiomeLogEventObserverDataSource;
@class HMDBiomeEventManager, NSString;

@interface HMDBiomeLogEventObserver : HMFObject <HMDLogEventObserver> {

	HMDBiomeEventManager* _biomeEventManager;
	id<HMDBiomeLogEventObserverDataSource> _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
-(id)initWithBiomeEventManager:(id)arg1 dataSource:(id)arg2 ;
@end
