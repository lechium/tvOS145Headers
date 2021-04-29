/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticsKit/DKDiagnosticManager.h>
#import <libobjc.A.dylib/DKAssetResponder.h>
#import <libobjc.A.dylib/DKUIResponder.h>

@protocol DKUIResponder;
@class NSMutableDictionary, NSMutableArray, NSString;

@interface DKDiagnosticXPCManager : DKDiagnosticManager <DKAssetResponder, DKUIResponder> {

	id<DKUIResponder> _uiResponder;
	NSMutableDictionary* _diagnostics;
	NSMutableArray* _activeDiagnostics;

}

@property (nonatomic,retain) NSMutableDictionary * diagnostics;                 //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeDiagnostics;                //@synthesize activeDiagnostics=_activeDiagnostics - In the implementation block
@property (assign,nonatomic,__weak) id<DKUIResponder> uiResponder;              //@synthesize uiResponder=_uiResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)diagnostics;
-(void)setDiagnostics:(NSMutableDictionary *)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(void)getAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUI:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 connectionRoute:(unsigned long long)arg2 ;
-(void)beginDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticsWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelAllDiagnostics;
-(NSMutableArray *)activeDiagnostics;
-(id<DKUIResponder>)uiResponder;
-(void)registerDiagnosticWithAttributes:(id)arg1 ;
-(void)setUiResponder:(id<DKUIResponder>)arg1 ;
-(void)setActiveDiagnostics:(NSMutableArray *)arg1 ;
@end

