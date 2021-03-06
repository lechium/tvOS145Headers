/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPBaseEntityTranslator.h>
#import <libobjc.A.dylib/MPMediaKitGenericObjectTranslator.h>

@class NSString;

@interface MPMediaKitEntityTranslator : MPBaseEntityTranslator <MPMediaKitGenericObjectTranslator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)buildSchemaIfNeeded;
+(id)createTranslatorForMPModelClass:(Class)arg1 ;
+(id)createGenericObjectTranslator;
+(id)translatorForType:(id)arg1 ;
-(id)identifiersForPayload:(id)arg1 context:(id)arg2 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 mediaKitType:(id)arg3 ;
-(void)mapIdentifierCreationKeyPaths:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPath:(id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformer:(/*^block*/id)arg3 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformerFunction:(/*function pointer*/void*)arg3 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 mediaKitType:(id)arg3 payloadTransform:(/*^block*/id)arg4 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 mediaKitType:(id)arg3 attributePayloadTransform:(/*^block*/id)arg4 ;
-(id)objectForPropertySet:(id)arg1 payload:(id)arg2 context:(id)arg3 ;
@end

