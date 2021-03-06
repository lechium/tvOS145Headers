/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSError, NSNumber, NSDate;

@interface HMDCharacteristicResponse : HMFObject {

	HMDCharacteristicRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDCharacteristicRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                       //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)responsesWithRequests:(id)arg1 error:(id)arg2 ;
-(NSError *)error;
-(HMDCharacteristicRequest *)request;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(id)attributeDescriptions;
-(NSDate *)valueUpdatedTime;
-(NSNumber *)stateNumber;
-(void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
@end

