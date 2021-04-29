/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class DKMutableDiagnosticResult;


@protocol DKDiagnostic <NSObject>
@property (nonatomic,retain) DKMutableDiagnosticResult * result; 
@property (assign,getter=isFinished,nonatomic) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@optional
-(void)cancel;
-(void)teardown;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2;

@required
-(void)start;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1;
-(BOOL)isFinished;
-(DKMutableDiagnosticResult *)result;
-(void)setResult:(id)arg1;

@end
