/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

@protocol CDPDBackupRecoveryResultsParser, CDPDBackupRecoveryErrorProvider;
@class NSArray;

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController {

	id<CDPDBackupRecoveryResultsParser> _resultParser;
	id<CDPDBackupRecoveryErrorProvider> _errorProvider;
	NSArray* _recoveryRecords;

}

@property (nonatomic,retain) NSArray * recoveryRecords;                                      //@synthesize recoveryRecords=_recoveryRecords - In the implementation block
@property (nonatomic,retain) id<CDPDBackupRecoveryResultsParser> resultParser;               //@synthesize resultParser=_resultParser - In the implementation block
@property (nonatomic,retain) id<CDPDBackupRecoveryErrorProvider> errorProvider;              //@synthesize errorProvider=_errorProvider - In the implementation block
-(void)retrieveInflatedDevices:(/*^block*/id)arg1 ;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2 ;
-(void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<CDPDBackupRecoveryResultsParser>)resultParser;
-(id<CDPDBackupRecoveryErrorProvider>)errorProvider;
-(id)_recoveryListFromDevices:(id)arg1 ;
-(void)setRecoveryRecords:(NSArray *)arg1 ;
-(void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg1 ;
-(void)beginRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)setResultParser:(id<CDPDBackupRecoveryResultsParser>)arg1 ;
-(void)setErrorProvider:(id<CDPDBackupRecoveryErrorProvider>)arg1 ;
-(NSArray *)recoveryRecords;
@end

