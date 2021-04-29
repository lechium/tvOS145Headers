/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DKDiagnostic_Internal <DKDiagnostic>
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
@property (assign,getter=isSetup,nonatomic) BOOL setup; 
@required
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1;
-(BOOL)isSetup;
-(void)setSetup:(BOOL)arg1;

@end

