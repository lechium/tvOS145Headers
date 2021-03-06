/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVServices/TVServices-Structs.h>
@interface TVSDevice : NSObject
+(id)systemVersion;
+(id)uniqueID;
+(id)productType;
+(id)deviceName;
+(BOOL)isActivated;
+(id)serialNumber;
+(BOOL)_isDevFused;
+(id)modelNumber;
+(id)systemReleaseType;
+(id)regionInfo;
+(id)systemBuildVersion;
+(BOOL)runningAnInternalBuild;
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
+(BOOL)runningACustomerBuild;
+(BOOL)supportsTouchRemote;
+(id)configurationInfo;
+(id)getMobileGestaltData:(CFStringRef)arg1 ;
+(id)marketingPartNumber;
+(id)HDMIFirmwareVersion;
+(unsigned long long)getMobileGestaltUnsignedLongLong:(CFStringRef)arg1 ;
+(BOOL)getMobileGestaltBoolean:(CFStringRef)arg1 ;
+(unsigned long long)_totalDiskCapacity;
+(id)uniqueIDData;
+(id)inverseUniqueID;
+(id)bonjourID;
+(id)userDeviceName;
+(BOOL)supports1080p;
+(BOOL)supportsUHDAndHDR;
+(BOOL)supportsARCAndEARC;
+(BOOL)supportsBluetoothLECapablity;
+(BOOL)supportsApplicationStorage;
+(unsigned long long)applicationCapacity;
+(unsigned long long)deviceCapacity;
+(BOOL)isFactoryActivated;
+(id)valueForNVRAMVariable:(id)arg1 ;
@end

