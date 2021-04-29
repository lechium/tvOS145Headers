/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDCloudStoreServiceExportedInterface.h>

@class PKEntitlementWhitelist, PDCloudStoreNotificationCoordinator, NSString;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDCloudStoreNotificationCoordinator* _cloudStoreNotificationCoordinator;

}

@property (nonatomic,retain) PDCloudStoreNotificationCoordinator * cloudStoreNotificationCoordinator;              //@synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)serviceResumed;
-(void)serviceSuspended;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)noteAccountDeletedWithHandler:(/*^block*/id)arg1 ;
-(PDCloudStoreNotificationCoordinator *)cloudStoreNotificationCoordinator;
-(void)updateCloudStoreWithLocalItemsWithConfigurations:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllItems:(unsigned long long)arg1 inZoneName:(id)arg2 containerName:(id)arg3 storeLocally:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recreateZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteCloudSyncPassesSwitchChangedWithHandler:(/*^block*/id)arg1 ;
-(void)setCloudStoreNotificationCoordinator:(PDCloudStoreNotificationCoordinator *)arg1 ;
@end

