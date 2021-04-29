/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface VCAudioRuleCollection : NSObject <NSCopying> {

	NSMutableArray* _rules;
	int _deviceRole;
	BOOL _allowAudioSwitching;
	BOOL _allowAudioRecording;
	int _aacBlockSize;
	NSMutableArray* _secondaryPayloads;

}

@property (assign,nonatomic) int aacBlockSize;                           //@synthesize aacBlockSize=_aacBlockSize - In the implementation block
@property (nonatomic,readonly) NSArray * rules;                          //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryPayloads;              //@synthesize secondaryPayloads=_secondaryPayloads - In the implementation block
@property (assign,nonatomic) BOOL allowAudioSwitching;                   //@synthesize allowAudioSwitching=_allowAudioSwitching - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                   //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
+(int)getForcedPayload;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setupAudioRulesWithSBR:(BOOL)arg1 isContinuity:(BOOL)arg2 ;
-(void)addAudioPayload:(int)arg1 isSecondary:(BOOL)arg2 sbr:(BOOL)arg3 ;
-(void)addAudioRule:(id)arg1 ;
-(void)clearAudioRules;
-(void)addAudioRules:(id)arg1 ;
-(BOOL)allowAudioSwitching;
-(void)setAllowAudioSwitching:(BOOL)arg1 ;
-(void)setAacBlockSize:(int)arg1 ;
-(id)initWithPhoneContinuity:(BOOL)arg1 allowAudioSwitching:(BOOL)arg2 sbr:(BOOL)arg3 aacBlockSize:(int)arg4 ;
-(id)initPrimaryPayload:(int)arg1 dtxPayload:(int)arg2 redPayload:(int)arg3 secondaryPayloads:(id)arg4 allowAudioSwitching:(BOOL)arg5 sbr:(BOOL)arg6 aacBlockSize:(int)arg7 ;
-(BOOL)isPayloadSupported:(int)arg1 ;
-(NSArray *)secondaryPayloads;
-(int)aacBlockSize;
@end

