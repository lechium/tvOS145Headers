/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedCharacteristicRequest.h>

@class NSArray, NSString;

@interface HAP2ControllerReadRequest : HAP2LoggingObject <HAP2EncodedCharacteristicRequest> {

	NSArray* _originalCharacteristics;

}

@property (nonatomic,readonly) NSArray * originalCharacteristics;              //@synthesize originalCharacteristics=_originalCharacteristics - In the implementation block
@property (nonatomic,readonly) NSArray * characteristics; 
@property (nonatomic,readonly) unsigned long long type; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(BOOL)isEncrypted;
-(NSArray *)characteristics;
-(id)serialize;
-(id)initWithCharacteristics:(id)arg1 ;
-(NSArray *)originalCharacteristics;
@end
