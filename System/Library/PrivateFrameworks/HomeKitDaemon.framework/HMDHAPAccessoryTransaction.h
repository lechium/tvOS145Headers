/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAccessoryTransaction.h>

@class HAPAccessory, NSString, NSNumber, NSData, NSDate, NSArray, HMFConnectivityInfo, NSSet;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction {

	HAPAccessory* _hapAccessoryLocal;

}

@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSString * bridgeUUID; 
@property (nonatomic,retain) NSNumber * supportsRelay; 
@property (nonatomic,retain) NSNumber * accessoryFlags; 
@property (nonatomic,retain) NSNumber * certificationStatus; 
@property (nonatomic,retain) NSData * broadcastKey; 
@property (nonatomic,retain) NSNumber * keyUpdatedStateNumber; 
@property (nonatomic,retain) NSDate * keyUpdatedTime; 
@property (nonatomic,retain) NSString * pairingUsername; 
@property (nonatomic,retain) NSData * publicKey; 
@property (nonatomic,retain) NSNumber * relayState; 
@property (nonatomic,retain) NSString * relayIdentifier; 
@property (nonatomic,retain) NSData * relayAccessToken; 
@property (nonatomic,retain) NSArray * transportInformation; 
@property (nonatomic,retain) NSData * accessorySetupHash; 
@property (nonatomic,retain) NSNumber * wiFiTransportCapabilities; 
@property (nonatomic,retain) NSArray * targetUUIDs; 
@property (nonatomic,retain) NSNumber * hardwareSupport; 
@property (nonatomic,retain) HMFConnectivityInfo * connectivityInfo; 
@property (nonatomic,retain) HAPAccessory * hapAccessoryLocal;                       //@synthesize hapAccessoryLocal=_hapAccessoryLocal - In the implementation block
@property (nonatomic,retain) NSNumber * sleepInterval; 
@property (nonatomic,retain) NSNumber * hasOnboardedForNaturalLighting; 
@property (nonatomic,copy) NSSet * initialServiceTypeUUIDs; 
+(id)properties;
-(id)dependentUUIDs;
-(void)setHapAccessoryLocal:(HAPAccessory *)arg1 ;
-(HAPAccessory *)hapAccessoryLocal;
@end

