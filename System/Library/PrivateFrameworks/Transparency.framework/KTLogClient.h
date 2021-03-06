/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Transparency/TransparencyLogClient.h>

@class NSURL;

@interface KTLogClient : TransparencyLogClient {

	BOOL _configured;
	NSURL* _consistencyProofURI;
	NSURL* _publicKeysURI;
	NSURL* _queryURI;
	NSURL* _revisionLogProofURI;
	double _expirationTime;

}

@property (retain) NSURL * queryURI;                         //@synthesize queryURI=_queryURI - In the implementation block
@property (retain) NSURL * publicKeysURI;                    //@synthesize publicKeysURI=_publicKeysURI - In the implementation block
@property (retain) NSURL * revisionLogProofURI;              //@synthesize revisionLogProofURI=_revisionLogProofURI - In the implementation block
@property (assign) BOOL configured;                          //@synthesize configured=_configured - In the implementation block
@property (assign) double expirationTime;                    //@synthesize expirationTime=_expirationTime - In the implementation block
@property (retain) NSURL * consistencyProofURI;              //@synthesize consistencyProofURI=_consistencyProofURI - In the implementation block
+(id)configBagURL;
+(id)configBagRequest;
+(id)formatEventName:(id)arg1 state:(id)arg2 ;
+(id)formatEventName:(id)arg1 application:(id)arg2 state:(id)arg3 ;
-(BOOL)configured;
-(void)configure:(/*^block*/id)arg1 ;
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(void)setConfigured:(BOOL)arg1 ;
-(BOOL)validateConfigEntries:(id)arg1 error:(id*)arg2 ;
-(void)setQueryURI:(NSURL *)arg1 ;
-(void)setConsistencyProofURI:(NSURL *)arg1 ;
-(void)setPublicKeysURI:(NSURL *)arg1 ;
-(void)setRevisionLogProofURI:(NSURL *)arg1 ;
-(BOOL)validateConfigBagCertificates:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateConfigBagSignature:(id)arg1 error:(id*)arg2 ;
-(id)readConfigFromDisk:(id*)arg1 ;
-(BOOL)validateConfigBagEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)processConfigBagData:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeConfigToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)configurationExpired;
-(BOOL)configureWithDisk:(id*)arg1 ;
-(BOOL)configureFromNetworkBag:(id)arg1 error:(id*)arg2 ;
-(NSURL *)publicKeysURI;
-(NSURL *)queryURI;
-(void)fetchMessage:(id)arg1 uri:(id)arg2 uuid:(id)arg3 application:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSURL *)consistencyProofURI;
-(NSURL *)revisionLogProofURI;
-(void)downloadMessage:(id)arg1 uri:(id)arg2 uuid:(id)arg3 application:(id)arg4 retry:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)copyConfigurationBag:(id*)arg1 ;
-(void)clearState:(id*)arg1 ;
-(void)fetchPublicKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchQuery:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchConsistencyProof:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchRevisionLogInclusionProof:(id)arg1 uuid:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadQuery:(id)arg1 uuid:(id)arg2 retry:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)downloadConsistencyProof:(id)arg1 uuid:(id)arg2 retry:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)downloadRevisionLogInclusionProof:(id)arg1 uuid:(id)arg2 retry:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)downloadPublicKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

