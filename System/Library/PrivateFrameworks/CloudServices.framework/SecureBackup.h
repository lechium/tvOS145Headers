/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSDate, NSData, NSDictionary, NSObject, NSError, EscrowPrerecord, SESWrapper;

@interface SecureBackup : NSObject <NSSecureCoding> {

	BOOL _deleteAll;
	BOOL _emcsMode;
	BOOL _excludeiCDPRecords;
	BOOL _fmipRecovery;
	BOOL _icdp;
	BOOL _idmsRecovery;
	BOOL _silent;
	BOOL _stingray;
	BOOL _synchronize;
	BOOL _useCachedPassphrase;
	BOOL _useRecoveryPET;
	BOOL _usesMultipleiCSC;
	BOOL _usesRandomPassphrase;
	BOOL _usesRecoveryKey;
	BOOL _suppressServerFiltering;
	BOOL _deleteDoubleOnly;
	BOOL _silentDoubleRecovery;
	NSString* _appleID;
	NSString* _authToken;
	NSDate* _backOffDate;
	NSData* _certData;
	NSString* _countryDialCode;
	NSString* _countryCode;
	NSString* _dsid;
	NSString* _emcsCred;
	NSDictionary* _emcsDict;
	NSString* _encodedMetadata;
	NSString* _duplicateEncodedMetadata;
	NSDictionary* _escrowRecord;
	NSString* _escrowProxyURL;
	NSString* _fmipUUID;
	NSString* _iCloudEnv;
	NSData* _iCloudIdentityData;
	NSString* _iCloudPassword;
	NSData* _idmsData;
	NSDictionary* _metadata;
	NSDictionary* _metadataHash;
	NSString* _oldEMCSCred;
	NSString* _passphrase;
	NSString* _recordID;
	NSString* _recoveryKey;
	NSString* _smsTarget;
	NSString* _verificationToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _error;
	NSString* _activityLabel;
	NSString* _activityUUID;
	NSString* _hsa2CachedPrerecordUUID;
	EscrowPrerecord* _prerecord;
	SESWrapper* _ses;

}

@property (nonatomic,retain) SESWrapper * ses;                                //@synthesize ses=_ses - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * authToken;                              //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSDate * backOffDate;                            //@synthesize backOffDate=_backOffDate - In the implementation block
@property (nonatomic,retain) NSData * certData;                               //@synthesize certData=_certData - In the implementation block
@property (nonatomic,copy) NSString * countryDialCode;                        //@synthesize countryDialCode=_countryDialCode - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                            //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL deleteAll;                                  //@synthesize deleteAll=_deleteAll - In the implementation block
@property (nonatomic,copy) NSString * dsid;                                   //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * emcsCred;                               //@synthesize emcsCred=_emcsCred - In the implementation block
@property (nonatomic,retain) NSDictionary * emcsDict;                         //@synthesize emcsDict=_emcsDict - In the implementation block
@property (assign,nonatomic) BOOL emcsMode;                                   //@synthesize emcsMode=_emcsMode - In the implementation block
@property (nonatomic,copy) NSString * encodedMetadata;                        //@synthesize encodedMetadata=_encodedMetadata - In the implementation block
@property (nonatomic,copy) NSString * duplicateEncodedMetadata;               //@synthesize duplicateEncodedMetadata=_duplicateEncodedMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * escrowRecord;                     //@synthesize escrowRecord=_escrowRecord - In the implementation block
@property (nonatomic,copy) NSString * escrowProxyURL;                         //@synthesize escrowProxyURL=_escrowProxyURL - In the implementation block
@property (assign,nonatomic) BOOL excludeiCDPRecords;                         //@synthesize excludeiCDPRecords=_excludeiCDPRecords - In the implementation block
@property (assign,nonatomic) BOOL fmipRecovery;                               //@synthesize fmipRecovery=_fmipRecovery - In the implementation block
@property (nonatomic,copy) NSString * fmipUUID;                               //@synthesize fmipUUID=_fmipUUID - In the implementation block
@property (assign,nonatomic) BOOL icdp;                                       //@synthesize icdp=_icdp - In the implementation block
@property (nonatomic,copy) NSString * iCloudEnv;                              //@synthesize iCloudEnv=_iCloudEnv - In the implementation block
@property (nonatomic,retain) NSData * iCloudIdentityData;                     //@synthesize iCloudIdentityData=_iCloudIdentityData - In the implementation block
@property (nonatomic,copy) NSString * iCloudPassword;                         //@synthesize iCloudPassword=_iCloudPassword - In the implementation block
@property (nonatomic,retain) NSData * idmsData;                               //@synthesize idmsData=_idmsData - In the implementation block
@property (assign,nonatomic) BOOL idmsRecovery;                               //@synthesize idmsRecovery=_idmsRecovery - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDictionary * metadataHash;                     //@synthesize metadataHash=_metadataHash - In the implementation block
@property (nonatomic,copy) NSString * oldEMCSCred;                            //@synthesize oldEMCSCred=_oldEMCSCred - In the implementation block
@property (nonatomic,copy) NSString * passphrase;                             //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,copy) NSString * recordID;                               //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                            //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (nonatomic,copy) NSString * smsTarget;                              //@synthesize smsTarget=_smsTarget - In the implementation block
@property (assign,nonatomic) BOOL silent;                                     //@synthesize silent=_silent - In the implementation block
@property (assign,nonatomic) BOOL stingray;                                   //@synthesize stingray=_stingray - In the implementation block
@property (assign,nonatomic) BOOL synchronize;                                //@synthesize synchronize=_synchronize - In the implementation block
@property (assign,nonatomic) BOOL useCachedPassphrase;                        //@synthesize useCachedPassphrase=_useCachedPassphrase - In the implementation block
@property (assign,nonatomic) BOOL useRecoveryPET;                             //@synthesize useRecoveryPET=_useRecoveryPET - In the implementation block
@property (assign,nonatomic) BOOL usesMultipleiCSC;                           //@synthesize usesMultipleiCSC=_usesMultipleiCSC - In the implementation block
@property (assign,nonatomic) BOOL usesRandomPassphrase;                       //@synthesize usesRandomPassphrase=_usesRandomPassphrase - In the implementation block
@property (assign,nonatomic) BOOL usesRecoveryKey;                            //@synthesize usesRecoveryKey=_usesRecoveryKey - In the implementation block
@property (nonatomic,copy) NSString * verificationToken;                      //@synthesize verificationToken=_verificationToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * activityLabel;                          //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,copy) NSString * activityUUID;                           //@synthesize activityUUID=_activityUUID - In the implementation block
@property (assign,nonatomic) BOOL suppressServerFiltering;                    //@synthesize suppressServerFiltering=_suppressServerFiltering - In the implementation block
@property (assign,nonatomic) BOOL deleteDoubleOnly;                           //@synthesize deleteDoubleOnly=_deleteDoubleOnly - In the implementation block
@property (assign,nonatomic) BOOL silentDoubleRecovery;                       //@synthesize silentDoubleRecovery=_silentDoubleRecovery - In the implementation block
@property (nonatomic,copy) NSString * hsa2CachedPrerecordUUID;                //@synthesize hsa2CachedPrerecordUUID=_hsa2CachedPrerecordUUID - In the implementation block
@property (nonatomic,retain) EscrowPrerecord * prerecord;                     //@synthesize prerecord=_prerecord - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned)daemonPasscodeRequestOpinion:(id*)arg1 ;
+(void)saveTermsAcceptance:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)getAcceptedTermsForAltDSID:(id)arg1 reply:(/*^block*/id)arg2 ;
+(id)_ClassCreateSecureBackupConcurrentConnection;
+(void)asyncRequestEscrowRecordUpdate;
+(id)_getAcceptedTermsForAltDSID:(id)arg1 withError:(id*)arg2 ;
+(unsigned)needPasscodeForHSA2EscrowRecordUpdate:(id*)arg1 ;
+(id)getAllAcceptedTermsWithError:(id*)arg1 ;
+(id)getAcceptedTermsForAltDSID:(id)arg1 withError:(id*)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)synchronize;
-(NSString *)countryCode;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setActivityUUID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(id)disableWithInfo:(id)arg1 ;
-(id)recoverWithInfo:(id)arg1 results:(id*)arg2 ;
-(NSDictionary *)metadata;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)recordID;
-(NSString *)activityUUID;
-(NSString *)iCloudPassword;
-(void)setICloudPassword:(NSString *)arg1 ;
-(void)setActivityLabel:(NSString *)arg1 ;
-(NSString *)activityLabel;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setIdmsRecovery:(BOOL)arg1 ;
-(NSData *)certData;
-(void)setMetadataHash:(NSDictionary *)arg1 ;
-(NSDictionary *)metadataHash;
-(NSString *)passphrase;
-(void)setPassphrase:(NSString *)arg1 ;
-(id)getAccountInfoWithInfo:(id)arg1 results:(id*)arg2 ;
-(id)enableWithInfo:(id)arg1 ;
-(void)recoverWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)changeSMSTargetWithInfo:(id)arg1 ;
-(NSDictionary *)escrowRecord;
-(void)setEscrowRecord:(NSDictionary *)arg1 ;
-(id)_CreateSecureBackupConnection;
-(id)initWithUserActivityLabel:(id)arg1 ;
-(NSDate *)backOffDate;
-(NSString *)countryDialCode;
-(BOOL)deleteAll;
-(NSString *)emcsCred;
-(NSDictionary *)emcsDict;
-(BOOL)emcsMode;
-(NSString *)escrowProxyURL;
-(BOOL)excludeiCDPRecords;
-(BOOL)fmipRecovery;
-(NSString *)fmipUUID;
-(BOOL)icdp;
-(NSString *)iCloudEnv;
-(NSData *)iCloudIdentityData;
-(NSData *)idmsData;
-(BOOL)idmsRecovery;
-(NSString *)oldEMCSCred;
-(NSString *)recoveryKey;
-(NSString *)smsTarget;
-(BOOL)silent;
-(BOOL)stingray;
-(BOOL)useCachedPassphrase;
-(NSString *)hsa2CachedPrerecordUUID;
-(BOOL)useRecoveryPET;
-(BOOL)usesMultipleiCSC;
-(BOOL)usesRandomPassphrase;
-(BOOL)usesRecoveryKey;
-(NSString *)verificationToken;
-(BOOL)suppressServerFiltering;
-(BOOL)silentDoubleRecovery;
-(BOOL)deleteDoubleOnly;
-(void)setBackOffDate:(NSDate *)arg1 ;
-(void)setCountryDialCode:(NSString *)arg1 ;
-(void)setDeleteAll:(BOOL)arg1 ;
-(void)setEmcsCred:(NSString *)arg1 ;
-(void)setEmcsDict:(NSDictionary *)arg1 ;
-(void)setEmcsMode:(BOOL)arg1 ;
-(void)setEscrowProxyURL:(NSString *)arg1 ;
-(void)setExcludeiCDPRecords:(BOOL)arg1 ;
-(void)setFmipRecovery:(BOOL)arg1 ;
-(void)setFmipUUID:(NSString *)arg1 ;
-(void)setIcdp:(BOOL)arg1 ;
-(void)setICloudEnv:(NSString *)arg1 ;
-(void)setICloudIdentityData:(NSData *)arg1 ;
-(void)setIdmsData:(NSData *)arg1 ;
-(void)setOldEMCSCred:(NSString *)arg1 ;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(void)setSmsTarget:(NSString *)arg1 ;
-(void)setSilent:(BOOL)arg1 ;
-(void)setStingray:(BOOL)arg1 ;
-(void)setSynchronize:(BOOL)arg1 ;
-(void)setUseCachedPassphrase:(BOOL)arg1 ;
-(void)setHsa2CachedPrerecordUUID:(NSString *)arg1 ;
-(void)setUseRecoveryPET:(BOOL)arg1 ;
-(void)setUsesMultipleiCSC:(BOOL)arg1 ;
-(void)setUsesRandomPassphrase:(BOOL)arg1 ;
-(void)setUsesRecoveryKey:(BOOL)arg1 ;
-(void)setVerificationToken:(NSString *)arg1 ;
-(void)setSuppressServerFiltering:(BOOL)arg1 ;
-(void)setSilentDoubleRecovery:(BOOL)arg1 ;
-(void)setDeleteDoubleOnly:(BOOL)arg1 ;
-(void)populateWithInfo:(id)arg1 ;
-(id)getAccountInfoWithError:(id*)arg1 ;
-(void)getAccountInfoWithResults:(/*^block*/id)arg1 ;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(BOOL)updateMetadataWithError:(id*)arg1 ;
-(void)updateMetadataWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)enableWithError:(id*)arg1 ;
-(void)enableWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)recoverWithError:(id*)arg1 ;
-(void)recoverWithResults:(/*^block*/id)arg1 ;
-(BOOL)disableWithError:(id*)arg1 ;
-(void)disableWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)stashRecoveryDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cachePassphrase;
-(void)cachePassphraseWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)uncachePassphrase;
-(void)uncachePassphraseWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)startSMSChallengeWithError:(id*)arg1 ;
-(void)startSMSChallengeWithResults:(/*^block*/id)arg1 ;
-(void)getCountrySMSCodesWithResults:(/*^block*/id)arg1 ;
-(BOOL)changeSMSTargetWithError:(id*)arg1 ;
-(void)changeSMSTargetWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)backOffDateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setBackOffDateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSes:(SESWrapper *)arg1 ;
-(SESWrapper *)ses;
-(void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2 ;
-(id)beginHSA2PasscodeRequest:(BOOL)arg1 uuid:(id)arg2 error:(id*)arg3 ;
-(void)recoverRecordContents:(/*^block*/id)arg1 ;
-(void)createICDPRecordWithContents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cacheRecoveryKeyWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)uncacheRecoveryKeyWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)backupWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)notificationInfo:(/*^block*/id)arg1 ;
-(void)stateCaptureWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)updateMetadataWithInfo:(id)arg1 ;
-(void)updateMetadataWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 error:(id*)arg3 ;
-(id)recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 error:(id*)arg3 ;
-(void)restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(BOOL)arg3 viewsNotToBeRestored:(id)arg4 error:(id*)arg5 ;
-(void)recoverWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)cachePassphraseWithInfo:(id)arg1 ;
-(void)cachePassphraseWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)uncachePassphraseWithInfo:(id)arg1 ;
-(void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)startSMSChallengeWithInfo:(id)arg1 results:(id*)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)backupWithInfo:(id)arg1 ;
-(void)backOffDateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setBackOffDateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)srpInitNonce;
-(id)srpRecoveryBlobFromSRPInitResponse:(id)arg1 ;
-(void)prepareHSA2EscrowRecordContents:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)beginHSA2PasscodeRequest:(BOOL)arg1 error:(id*)arg2 ;
-(void)getCertificates:(/*^block*/id)arg1 ;
-(BOOL)requiresDoubleEnrollment;
-(void)setCertData:(NSData *)arg1 ;
-(NSString *)encodedMetadata;
-(void)setEncodedMetadata:(NSString *)arg1 ;
-(NSString *)duplicateEncodedMetadata;
-(void)setDuplicateEncodedMetadata:(NSString *)arg1 ;
-(EscrowPrerecord *)prerecord;
-(void)setPrerecord:(EscrowPrerecord *)arg1 ;
@end

