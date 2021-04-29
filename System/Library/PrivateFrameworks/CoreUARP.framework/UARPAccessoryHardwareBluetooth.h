/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUARP/UARPAccessoryHardwareID.h>

@interface UARPAccessoryHardwareBluetooth : UARPAccessoryHardwareID {

	unsigned short _vendorID;
	unsigned short _productID;
	unsigned short _productVersion;
	long long _vendorIDSource;

}

@property (readonly) long long vendorIDSource;                   //@synthesize vendorIDSource=_vendorIDSource - In the implementation block
@property (readonly) unsigned short vendorID;                    //@synthesize vendorID=_vendorID - In the implementation block
@property (readonly) unsigned short productID;                   //@synthesize productID=_productID - In the implementation block
@property (readonly) unsigned short productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(unsigned short)productVersion;
-(unsigned short)productID;
-(unsigned short)vendorID;
-(long long)vendorIDSource;
-(id)initWithVendorIDSource:(long long)arg1 vendorID:(unsigned short)arg2 productID:(unsigned short)arg3 productVersion:(unsigned short)arg4 ;
@end
