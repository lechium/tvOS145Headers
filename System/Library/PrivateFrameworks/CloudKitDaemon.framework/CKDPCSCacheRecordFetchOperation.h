/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class NSString, CKRecordID, CKDRecordPCSData;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation {

	BOOL _serverRecordHasNoProtectionData;
	NSString* _serverRecordType;

}

@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,retain) CKDRecordPCSData * recordPCSData; 
@property (assign,nonatomic) BOOL serverRecordHasNoProtectionData;              //@synthesize serverRecordHasNoProtectionData=_serverRecordHasNoProtectionData - In the implementation block
@property (nonatomic,retain) NSString * serverRecordType;                       //@synthesize serverRecordType=_serverRecordType - In the implementation block
-(CKRecordID *)recordID;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchDependentPCS;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_savePCSDataToCache;
-(CKDRecordPCSData *)recordPCSData;
-(void)setRecordPCSData:(CKDRecordPCSData *)arg1 ;
-(BOOL)serverRecordHasNoProtectionData;
-(void)setServerRecordType:(NSString *)arg1 ;
-(void)setServerRecordHasNoProtectionData:(BOOL)arg1 ;
-(BOOL)needsChainPCSCreation;
-(NSString *)serverRecordType;
-(BOOL)_fetchPCSForPrivateZone;
-(BOOL)_fetchDependentPCSInSharedDatabase;
-(BOOL)_decryptRecordPCSInPrivateDatabase;
-(BOOL)_decryptRecordPCSInSharedDatabase;
@end

