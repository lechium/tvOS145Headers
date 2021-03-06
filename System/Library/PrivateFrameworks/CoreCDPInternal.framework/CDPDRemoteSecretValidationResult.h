/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CDPDevice, NSString, NSDictionary, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject {

	BOOL _userDidCancel;
	BOOL _userDidReset;
	unsigned long long _secretType;
	CDPDevice* _device;
	NSString* _validSecret;
	NSDictionary* _recoveredInfo;
	OTClique* _recoveredClique;

}

@property (assign,nonatomic) unsigned long long secretType;              //@synthesize secretType=_secretType - In the implementation block
@property (assign,nonatomic) BOOL userDidCancel;                         //@synthesize userDidCancel=_userDidCancel - In the implementation block
@property (assign,nonatomic) BOOL userDidReset;                          //@synthesize userDidReset=_userDidReset - In the implementation block
@property (nonatomic,copy) CDPDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * validSecret;                       //@synthesize validSecret=_validSecret - In the implementation block
@property (nonatomic,copy) NSDictionary * recoveredInfo;                 //@synthesize recoveredInfo=_recoveredInfo - In the implementation block
@property (nonatomic,retain) OTClique * recoveredClique;                 //@synthesize recoveredClique=_recoveredClique - In the implementation block
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
-(unsigned long long)secretType;
-(void)setRecoveredInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)recoveredInfo;
-(void)setSecretType:(unsigned long long)arg1 ;
-(BOOL)userDidCancel;
-(void)setUserDidCancel:(BOOL)arg1 ;
-(BOOL)userDidReset;
-(void)setUserDidReset:(BOOL)arg1 ;
-(NSString *)validSecret;
-(void)setValidSecret:(NSString *)arg1 ;
-(OTClique *)recoveredClique;
-(void)setRecoveredClique:(OTClique *)arg1 ;
@end

