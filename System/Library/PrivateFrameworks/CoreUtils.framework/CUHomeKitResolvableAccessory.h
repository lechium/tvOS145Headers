/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMAccessory, NSData;

@interface CUHomeKitResolvableAccessory : NSObject {

	HMAccessory* _accessory;
	NSData* _irkData;

}

@property (nonatomic,retain) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSData * irkData;                     //@synthesize irkData=_irkData - In the implementation block
-(NSData *)irkData;
-(void)setIrkData:(NSData *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
@end

