/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSMutableDictionary, NSArray, NSDictionary, NSString;

@interface SSEntity : NSObject <SSXPCCoding> {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _localExternalValues;
	NSMutableDictionary* _localValues;
	long long _pid;
	NSArray* _dirtyLocalExternalProperties;
	NSArray* _dirtyLocalProperties;

}

@property (readonly) long long _persistentIdentifier; 
@property (setter=_setLocalExternalValues:,getter=_localExternalValues,copy) NSDictionary * _localExternalValues; 
@property (setter=_setLocalValues:,getter=_localValues,copy) NSDictionary * _localValues; 
@property (getter=_isManaged,readonly) BOOL _managed; 
@property (readonly) BOOL exists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)_isManaged;
-(id)copyXPCEncoding;
-(id)_initWithPersistentIdentifier:(long long)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)setExternalValuesWithDictionary:(id)arg1 ;
-(BOOL)setValuesWithDictionary:(id)arg1 ;
-(void)_resetLocalIVars;
-(void)_addCachedExternalValues:(id)arg1 ;
-(void)_addCachedPropertyValues:(id)arg1 ;
-(NSDictionary *)_localExternalValues;
-(void)_setLocalExternalValues:(id)arg1 ;
-(NSDictionary *)_localValues;
-(void)_setLocalValues:(id)arg1 ;
-(void)_setDirtyCachedExternalProperties:(id)arg1 ;
-(void)_setDirtyCachedProperties:(id)arg1 ;
-(void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 message:(long long)arg4 ;
-(void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(long long)_persistentIdentifier;
-(void)__addCachedExternalValues:(id)arg1 ;
-(void)__addCachedPropertyValues:(id)arg1 ;
-(BOOL)exists;
-(void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)resetCachedProperties:(const id*)arg1 count:(unsigned long long)arg2 ;
@end

