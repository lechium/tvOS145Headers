/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SymptomDiagnosticReporter.framework/SymptomDiagnosticReporter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, SDRDiagnosticReporterDelegate;
@class NSXPCConnection, NSObject;

@interface SDRDiagnosticReporter : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	id<SDRDiagnosticReporterDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<SDRDiagnosticReporterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(BOOL)isABCEnabled;
-(id)init;
-(void)dealloc;
-(id<SDRDiagnosticReporterDelegate>)delegate;
-(void)setDelegate:(id<SDRDiagnosticReporterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)getAutoBugCaptureConfiguration:(/*^block*/id)arg1 ;
-(void)setupXPCInterface;
-(BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(/*^block*/id)arg7 ;
-(BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(/*^block*/id)arg7 ;
-(BOOL)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)endSession:(id)arg1 ;
-(BOOL)cancelSession:(id)arg1 ;
-(BOOL)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)purgeAutoBugCaptureFilesWithSubPaths:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subtypeContext:(id)arg4 detectedProcess:(id)arg5 triggerThresholdValues:(id)arg6 ;
-(id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 detectedProcess:(id)arg4 triggerThresholdValues:(id)arg5 ;
-(BOOL)isSignatureValid:(id)arg1 ;
-(id)_payloadAugmentedWithSandboxExtensionTokensDict:(id)arg1 ;
-(id)actionsDictionary:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 ;
-(void)casesListCallbackWithResult:(id)arg1 service:(id)arg2 identifier:(id)arg3 count:(unsigned long long)arg4 container:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)caseSummariesListCallbackWithResult:(id)arg1 service:(id)arg2 caseSummaryType:(id)arg3 count:(unsigned long long)arg4 container:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 originatingProcess:(id)arg4 triggerThreshold:(id)arg5 ;
-(BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)snapshotWithSignature:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 duration:(double)arg4 events:(id)arg5 payload:(id)arg6 actions:(id)arg7 reply:(/*^block*/id)arg8 ;
-(BOOL)snapshotWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)startSessionWithSignature:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 duration:(double)arg4 events:(id)arg5 payload:(id)arg6 actions:(id)arg7 reply:(/*^block*/id)arg8 ;
-(BOOL)startSessionWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)triggerRemoteSessionForSignature:(id)arg1 caseGroupID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getAllDiagnosticCasesWithReply:(/*^block*/id)arg1 ;
-(void)getDiagnosticCaseSummariesOfType:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getDiagnosticCaseSummariesWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

