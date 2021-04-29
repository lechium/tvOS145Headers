/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UARPControllerInternalDelegate
@property (readonly) BOOL useAssetAvailabilityNotifications; 
@required
-(BOOL)removeAccessory:(id)arg1;
-(BOOL)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3;
-(BOOL)checkForUpdate:(id)arg1;
-(BOOL)downloadAvailableFirmwareUpdate:(id)arg1 assetID:(id)arg2 withUserIntent:(BOOL)arg3;
-(BOOL)downloadReleaseNotes:(id)arg1 assetID:(id)arg2;
-(BOOL)addAccessory:(id)arg1 assetID:(id)arg2;
-(BOOL)changeAssetLocation:(id)arg1 assetID:(id)arg2;
-(void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3;
-(void)sendFirmwareUpdateProgressForAccessory:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
-(BOOL)personalizationVectorForAccessory:(id)arg1 assetTag:(unsigned)arg2 outVector:(unsigned*)arg3;
-(void)manifestPropertiesReceivedForAccessory:(id)arg1 assetTag:(unsigned)arg2 properties:(id)arg3;
-(id)getAssetIDForAccessoryID:(id)arg1;
-(BOOL)useAssetAvailabilityNotifications;

@end
