/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class ACFPrincipal, ACFMessage, NSNumber, NSString, NSDate, NSMutableDictionary, NSData;


@protocol ACCAuthContextProtocol <NSObject>
@property (retain) ACFPrincipal * principal; 
@property (retain) ACFMessage * request; 
@property (assign) NSNumber * authenticationType; 
@property (retain) NSNumber * appID; 
@property (retain) NSString * encryptionHash; 
@property (retain) NSString * nonce; 
@property (retain) NSString * oldUserKey; 
@property (retain) NSString * currentUserKey; 
@property (retain) NSString * appIDKey; 
@property (retain) NSString * dsKeyVersion; 
@property (retain) NSString * sessionToken; 
@property (retain) NSString * tokenVersion; 
@property (retain) NSDate * creationDate; 
@property (nonatomic,readonly) NSMutableDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * tokenSourceString; 
@property (nonatomic,retain) NSData * encryptionKey; 
@property (nonatomic,retain) NSData * initializationVector; 
@property (nonatomic,retain) NSNumber * personID; 
@property (nonatomic,retain) NSString * selectedDeviceId; 
@property (nonatomic,retain) NSString * selectedDeviceType; 
@property (nonatomic,retain) NSString * twoStepVerificationCode; 
@property (nonatomic,retain) NSString * serviceName; 
@property (nonatomic,retain) NSString * recoveryKey; 
@property (nonatomic,retain) NSString * clientSecretTokenHmac; 
@property (nonatomic,retain) NSNumber * clientSecretCreateDate; 
@property (nonatomic,retain) NSNumber * touchIDSupport; 
@property (nonatomic,readonly) NSString * xmlTokenSourceString; 
@optional
-(NSString *)serviceName;
-(void)setServiceName:(id)arg1;
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(id)arg1;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(id)arg1;
-(NSNumber *)touchIDSupport;
-(void)setClientSecretTokenHmac:(id)arg1;
-(void)setTouchIDSupport:(id)arg1;
-(NSString *)clientSecretTokenHmac;
-(NSString *)xmlTokenSourceString;

@required
+(id)authContextWithRequest:(id)arg1;
-(ACFMessage *)request;
-(NSDate *)creationDate;
-(NSNumber *)authenticationType;
-(void)setAuthenticationType:(id)arg1;
-(void)setCreationDate:(id)arg1;
-(NSString *)nonce;
-(void)setNonce:(id)arg1;
-(void)setRequest:(id)arg1;
-(NSNumber *)personID;
-(void)setPersonID:(id)arg1;
-(NSNumber *)appID;
-(void)setAppID:(id)arg1;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(id)arg1;
-(NSString *)sessionToken;
-(void)setSessionToken:(id)arg1;
-(NSData *)initializationVector;
-(void)setInitializationVector:(id)arg1;
-(ACFPrincipal *)principal;
-(void)setPrincipal:(id)arg1;
-(NSMutableDictionary *)parametersDictionary;
-(void)setAppIDKey:(id)arg1;
-(NSString *)appIDKey;
-(NSString *)dsKeyVersion;
-(void)setDsKeyVersion:(id)arg1;
-(void)setEncryptionHash:(id)arg1;
-(void)setOldUserKey:(id)arg1;
-(void)setCurrentUserKey:(id)arg1;
-(void)setTokenVersion:(id)arg1;
-(NSString *)tokenVersion;
-(NSString *)encryptionHash;
-(NSString *)currentUserKey;
-(NSString *)oldUserKey;
-(NSString *)selectedDeviceId;
-(NSString *)selectedDeviceType;
-(NSString *)twoStepVerificationCode;
-(NSString *)tokenSourceString;
-(void)setSelectedDeviceId:(id)arg1;
-(void)setSelectedDeviceType:(id)arg1;
-(void)setTwoStepVerificationCode:(id)arg1;

@end

