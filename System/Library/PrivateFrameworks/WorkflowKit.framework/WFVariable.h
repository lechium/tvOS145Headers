/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFVariableStringContent.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>

@class NSArray, NSHashTable, NSDictionary, NSString, WFImage;

@interface WFVariable : NSObject <WFVariableStringContent, NSCopying, WFVariableSerialization> {

	NSArray* _aggrandizements;
	NSHashTable* _delegates;
	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * propertyName; 
@property (nonatomic,readonly) NSString * nameIncludingPropertyName; 
@property (nonatomic,readonly) NSHashTable * delegates;                                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionary;                                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSArray * aggrandizements;                                   //@synthesize aggrandizements=_aggrandizements - In the implementation block
@property (nonatomic,readonly) BOOL supportsAggrandizements; 
@property (nonatomic,readonly) BOOL requiresModernVariableSupport; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) WFImage * icon; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionary;
-(NSString *)UUID;
-(id)serializedRepresentation;
-(WFImage *)icon;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSString *)propertyName;
-(BOOL)isAvailable;
-(NSHashTable *)delegates;
-(void)getObjectRepresentationForClass:(Class)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)possibleAggrandizedContentClassesWithContext:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)nameIncludingPropertyName;
-(id)initWithDictionary:(id)arg1 variableProvider:(id)arg2 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)possibleContentClassesWithContext:(id)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(void)wf_getContentItemsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)wf_lengthInVariableString;
-(BOOL)supportsAggrandizements;
-(BOOL)requiresModernVariableSupport;
-(void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2 ;
-(void)variableProvider:(id)arg1 variableWasMoved:(id)arg2 ;
-(void)variableProviderDidInvalidateOutputDetails:(id)arg1 ;
-(void)variableUpdated;
-(id)possibleContentClasses;
-(id)possibleAggrandizedContentClasses;
-(void)getContentWithContext:(id)arg1 trackContentAttribution:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)variableBySettingAggrandizements:(id)arg1 ;
-(NSArray *)aggrandizements;
@end

