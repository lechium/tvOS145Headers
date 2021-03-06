/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDAppleMediaAccessoriesStateMessengerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDAppleMediaAccessoriesStateManagerDataSource;
@class NSUUID, HMDAppleMediaAccessoriesStateMessenger, HMDAppleMediaAccessoriesStateManagerMetricsDispatcher, NSString;

@interface HMDAppleMediaAccessoriesStateManager : HMFObject <HMDAppleMediaAccessoriesStateMessengerDelegate, HMFLogging> {

	id<HMDAppleMediaAccessoriesStateManagerDataSource> _dataSource;
	NSUUID* _identifier;
	HMDAppleMediaAccessoriesStateMessenger* _messenger;
	HMDAppleMediaAccessoriesStateManagerMetricsDispatcher* _metricsDispatcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * identifier;                                                                    //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDAppleMediaAccessoriesStateMessenger * messenger;                                     //@synthesize messenger=_messenger - In the implementation block
@property (readonly) HMDAppleMediaAccessoriesStateManagerMetricsDispatcher * metricsDispatcher;              //@synthesize metricsDispatcher=_metricsDispatcher - In the implementation block
@property (__weak) id<HMDAppleMediaAccessoriesStateManagerDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
+(id)logCategory;
-(void)run;
-(NSUUID *)identifier;
-(id<HMDAppleMediaAccessoriesStateManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMDAppleMediaAccessoriesStateManagerDataSource>)arg1 ;
-(HMDAppleMediaAccessoriesStateMessenger *)messenger;
-(id)logIdentifier;
-(void)runMultipleIdentifierCorrectionSequence;
-(id)remoteAppleMediaAccessoriesByIdentifier;
-(HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *)metricsDispatcher;
-(void)correctStateForMatchingIdentifier:(id)arg1 appleMediaAccessories:(id)arg2 ;
-(void)_correctStateForMatchingIdentifier:(id)arg1 appleMediaAccessories:(id)arg2 sendList:(id)arg3 ;
-(id)sendModelIdentifierRequestMessageForAppleMediaAccessory:(id)arg1 accessoryIdentifier:(id)arg2 ;
-(void)correctStateForMatchingAppleMediaAccessories:(id)arg1 modelIdentifier:(id)arg2 ;
-(id)remoteAppleMediaAccessories;
-(id)dataSourceAppleMediaAccessories;
-(id)initWithIdentifier:(id)arg1 messenger:(id)arg2 metricsDispatcher:(id)arg3 ;
-(void)appleMediaAccessoriesStateMessenger:(id)arg1 didReceiveModelIdentiferRequestMessage:(id)arg2 withAccessoryIdentifier:(id)arg3 ;
@end

