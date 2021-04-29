/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, HAPTLVUnsignedNumberValue, HAPCharacteristicValueRange, NSString;

@interface HAPCharacteristicValueLinearDerivedTransition : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _transitionPoints;
	HAPTLVUnsignedNumberValue* _sourceHAPInstanceID;
	HAPCharacteristicValueRange* _sourceValueRange;

}

@property (nonatomic,retain) NSMutableArray * transitionPoints;                            //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * sourceHAPInstanceID;              //@synthesize sourceHAPInstanceID=_sourceHAPInstanceID - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueRange * sourceValueRange;               //@synthesize sourceValueRange=_sourceValueRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setTransitionPoints:(NSMutableArray *)arg1 ;
-(void)setSourceHAPInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setSourceValueRange:(HAPCharacteristicValueRange *)arg1 ;
-(NSMutableArray *)transitionPoints;
-(HAPTLVUnsignedNumberValue *)sourceHAPInstanceID;
-(HAPCharacteristicValueRange *)sourceValueRange;
-(id)initWithTransitionPoints:(id)arg1 sourceHAPInstanceID:(id)arg2 sourceValueRange:(id)arg3 ;
@end
