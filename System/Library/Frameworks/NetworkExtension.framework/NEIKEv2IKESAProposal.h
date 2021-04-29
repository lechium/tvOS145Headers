/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol, NEIKEv2PRFProtocol, NEIKEv2DHProtocol, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2IKESAProposal : NSObject <NSCopying> {

	unsigned char _proposalNumber;
	NSArray* _encryptionProtocols;
	NSArray* _integrityProtocols;
	NSArray* _prfProtocols;
	NSArray* _dhProtocols;
	NSArray* _eapProtocols;
	unsigned long long _lifetimeSeconds;
	NEIKEv2EncryptionProtocol* _chosenEncryptionProtocol;
	NEIKEv2IntegrityProtocol* _chosenIntegrityProtocol;
	NEIKEv2PRFProtocol* _chosenPRFProtocol;
	NEIKEv2DHProtocol* _chosenDHProtocol;
	NEIKEv2AuthenticationProtocol* _authenticationProtocol;

}

@property (assign) unsigned char proposalNumber;                                                  //@synthesize proposalNumber=_proposalNumber - In the implementation block
@property (retain) NEIKEv2EncryptionProtocol * chosenEncryptionProtocol;                          //@synthesize chosenEncryptionProtocol=_chosenEncryptionProtocol - In the implementation block
@property (retain) NEIKEv2IntegrityProtocol * chosenIntegrityProtocol;                            //@synthesize chosenIntegrityProtocol=_chosenIntegrityProtocol - In the implementation block
@property (retain) NEIKEv2PRFProtocol * chosenPRFProtocol;                                        //@synthesize chosenPRFProtocol=_chosenPRFProtocol - In the implementation block
@property (retain) NEIKEv2DHProtocol * chosenDHProtocol;                                          //@synthesize chosenDHProtocol=_chosenDHProtocol - In the implementation block
@property (readonly) NEIKEv2EncryptionProtocol * encryptionProtocol; 
@property (readonly) NEIKEv2IntegrityProtocol * integrityProtocol; 
@property (readonly) NEIKEv2PRFProtocol * prfProtocol; 
@property (readonly) NEIKEv2DHProtocol * dhProtocol; 
@property (readonly) BOOL hasEAPMethods; 
@property (nonatomic,retain) NEIKEv2AuthenticationProtocol * authenticationProtocol;              //@synthesize authenticationProtocol=_authenticationProtocol - In the implementation block
@property (retain) NSArray * encryptionProtocols;                                                 //@synthesize encryptionProtocols=_encryptionProtocols - In the implementation block
@property (retain) NSArray * integrityProtocols;                                                  //@synthesize integrityProtocols=_integrityProtocols - In the implementation block
@property (retain) NSArray * prfProtocols;                                                        //@synthesize prfProtocols=_prfProtocols - In the implementation block
@property (retain) NSArray * dhProtocols;                                                         //@synthesize dhProtocols=_dhProtocols - In the implementation block
@property (retain) NSArray * eapProtocols;                                                        //@synthesize eapProtocols=_eapProtocols - In the implementation block
@property (assign) unsigned long long lifetimeSeconds;                                            //@synthesize lifetimeSeconds=_lifetimeSeconds - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setLifetimeSeconds:(unsigned long long)arg1 ;
-(NEIKEv2DHProtocol *)chosenDHProtocol;
-(NSArray *)dhProtocols;
-(unsigned char)proposalNumber;
-(NEIKEv2EncryptionProtocol *)chosenEncryptionProtocol;
-(NSArray *)encryptionProtocols;
-(NEIKEv2IntegrityProtocol *)chosenIntegrityProtocol;
-(NSArray *)integrityProtocols;
-(NEIKEv2PRFProtocol *)chosenPRFProtocol;
-(NSArray *)prfProtocols;
-(NSArray *)eapProtocols;
-(unsigned long long)lifetimeSeconds;
-(NEIKEv2AuthenticationProtocol *)authenticationProtocol;
-(void)setEncryptionProtocols:(NSArray *)arg1 ;
-(void)setIntegrityProtocols:(NSArray *)arg1 ;
-(void)setPrfProtocols:(NSArray *)arg1 ;
-(void)setDhProtocols:(NSArray *)arg1 ;
-(void)setEapProtocols:(NSArray *)arg1 ;
-(void)setProposalNumber:(unsigned char)arg1 ;
-(void)setChosenEncryptionProtocol:(NEIKEv2EncryptionProtocol *)arg1 ;
-(void)setChosenIntegrityProtocol:(NEIKEv2IntegrityProtocol *)arg1 ;
-(void)setChosenPRFProtocol:(NEIKEv2PRFProtocol *)arg1 ;
-(void)setChosenDHProtocol:(NEIKEv2DHProtocol *)arg1 ;
-(void)setAuthenticationProtocol:(NEIKEv2AuthenticationProtocol *)arg1 ;
-(unsigned long long)softLifetimeSecondsForInitiator:(BOOL)arg1 ;
-(NEIKEv2EncryptionProtocol *)encryptionProtocol;
-(NEIKEv2IntegrityProtocol *)integrityProtocol;
-(NEIKEv2PRFProtocol *)prfProtocol;
-(NEIKEv2DHProtocol *)dhProtocol;
-(BOOL)hasEAPMethods;
-(id)copyFromRemote:(id)arg1 ;
-(BOOL)matchesProposal:(id)arg1 ;
-(unsigned long long)lifetimeSecondsBeyondSoftLifetimeForInitiator:(BOOL)arg1 ;
-(BOOL)isAValidResponse;
@end

