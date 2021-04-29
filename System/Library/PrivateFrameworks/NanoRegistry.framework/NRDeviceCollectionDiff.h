/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceCollectionDiff;

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffDeviceDiffs;

}

@property (nonatomic,readonly) NRPBDeviceCollectionDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NRPBDeviceCollectionDiff *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1 ;
-(id)diffCollectionDiffForPairingID:(id)arg1 ;
-(id)allPairingIDs;
@end

