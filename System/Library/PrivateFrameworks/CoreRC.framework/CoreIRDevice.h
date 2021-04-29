/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRCDevice.h>

@class NSArray, CoreIRLearningSession, NSString, NSUUID;

@interface CoreIRDevice : CoreRCDevice {

	BOOL _isTransmitter;
	BOOL _isReceiver;
	unsigned long long _vendorID;
	NSArray* _buttons;
	CoreIRLearningSession* _learningSession;
	NSString* _OSDName;

}

@property (nonatomic,copy) NSString * OSDName;                                     //@synthesize OSDName=_OSDName - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                      //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL isTransmitter;                                   //@synthesize isTransmitter=_isTransmitter - In the implementation block
@property (assign,nonatomic) BOOL isReceiver;                                      //@synthesize isReceiver=_isReceiver - In the implementation block
@property (nonatomic,readonly) BOOL is3rdPartyRemote; 
@property (assign,nonatomic) unsigned long long vendorID;                          //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,retain) CoreIRLearningSession * learningSession;              //@synthesize learningSession=_learningSession - In the implementation block
@property (nonatomic,readonly) BOOL isAppleRemote; 
@property (nonatomic,readonly) NSUUID * deviceID; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(NSUUID *)deviceID;
-(unsigned long long)vendorID;
-(void)setVendorID:(unsigned long long)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(BOOL)isReceiver;
-(BOOL)isTransmitter;
-(BOOL)setOSDName:(id)arg1 error:(id*)arg2 ;
-(NSString *)OSDName;
-(BOOL)setCommand:(unsigned long long)arg1 target:(id)arg2 forButtonCombination:(id)arg3 delay:(double)arg4 error:(id*)arg5 ;
-(BOOL)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)clearAllStoredCommands:(id*)arg1 ;
-(id)startLearningSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)updateMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAppleRemote;
-(BOOL)pairAppleRemote:(id*)arg1 ;
-(BOOL)unpairAppleRemote:(id*)arg1 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 deviceType:(unsigned long long)arg3 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 ;
-(void)setIsTransmitter:(BOOL)arg1 ;
-(void)setIsReceiver:(BOOL)arg1 ;
-(BOOL)is3rdPartyRemote;
-(id)mergeProperties;
-(CoreIRLearningSession *)learningSession;
-(BOOL)sendCommand:(id)arg1 error:(id*)arg2 ;
-(BOOL)changeButtonCombination:(id)arg1 delay:(double)arg2 enabled:(BOOL)arg3 error:(id*)arg4 ;
-(void)setLearningSession:(CoreIRLearningSession *)arg1 ;
-(void)setOSDName:(NSString *)arg1 ;
-(BOOL)setRemoteName:(id)arg1 error:(id*)arg2 ;
@end

