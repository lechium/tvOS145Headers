/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, NSArray, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * callFrameId; 
@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSArray * scopeChain; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * thisObject; 
@property (assign,nonatomic) BOOL isTailDeleted; 
-(NSString *)functionName;
-(RWIProtocolDebuggerLocation *)location;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
-(void)setCallFrameId:(NSString *)arg1 ;
-(void)setThisObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setIsTailDeleted:(BOOL)arg1 ;
-(id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(BOOL)arg6 ;
-(NSString *)callFrameId;
-(RWIProtocolRuntimeRemoteObject *)thisObject;
-(BOOL)isTailDeleted;
@end

