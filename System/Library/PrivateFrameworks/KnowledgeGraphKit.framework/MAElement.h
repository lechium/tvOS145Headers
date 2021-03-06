/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MABaseGraph, NSString;


@protocol MAElement <NSObject>
@property (readonly,nonatomic) MABaseGraph * graph; 
@property (readonly,nonatomic) unsigned identifier; 
@property (readonly,nonatomic) NSString * label; 
@property (readonly,nonatomic) unsigned short domain; 
@property (readonly,nonatomic) float weight; 
@required
-(id)objectForKeyedSubscript:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(unsigned short)domain;
-(id)propertyForKey:(id)arg1;
-(id)propertyForKey:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(id)setObject:(id)arg1;
-(unsigned)identifier;
-(void)removePropertyForKey:(id)arg1;
-(void)removePropertyForKey:(id)arg1;
-(NSString *)label;
-(float)weight;
-(void)setProperties:(id)arg1;
-(unsigned long long)propertiesCount;
-(MABaseGraph *)graph;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2;
-(id)propertyKeys;
-(BOOL)hasProperties;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(BOOL)hasProperties:(id)arg1;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(id)visualString;

@end

