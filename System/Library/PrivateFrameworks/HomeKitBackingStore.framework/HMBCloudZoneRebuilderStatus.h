/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectCoder.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying> {

	long long _keyStatus;
	NSString* _message;
	unsigned long long _rebuildState;

}

@property (nonatomic,readonly) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long rebuildState;              //@synthesize rebuildState=_rebuildState - In the implementation block
@property (nonatomic,readonly) long long keyStatus;                          //@synthesize keyStatus=_keyStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rebuilderStateString:(unsigned long long)arg1 ;
+(id)keyStatusString:(long long)arg1 ;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(id)attributeDescriptions;
-(unsigned long long)rebuildState;
-(long long)keyStatus;
-(id)initWithState:(unsigned long long)arg1 message:(id)arg2 ;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
@end

