/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying> {

	long long _persistenceOptions;
	Class _defaultNodeClass;
	Class _defaultEdgeClass;
	MAGraphReference* _rootGraphReference;

}

@property (assign) long long persistenceOptions;                                 //@synthesize persistenceOptions=_persistenceOptions - In the implementation block
@property (retain) Class defaultNodeClass;                                       //@synthesize defaultNodeClass=_defaultNodeClass - In the implementation block
@property (retain) Class defaultEdgeClass;                                       //@synthesize defaultEdgeClass=_defaultEdgeClass - In the implementation block
@property (nonatomic,retain) MAGraphReference * rootGraphReference;              //@synthesize rootGraphReference=_rootGraphReference - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(Class)defaultNodeClass;
-(void)setDefaultNodeClass:(Class)arg1 ;
-(Class)defaultEdgeClass;
-(void)setDefaultEdgeClass:(Class)arg1 ;
-(Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)enumerateNodeClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgeClassesUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistenceOptions;
-(void)setPersistenceOptions:(long long)arg1 ;
-(MAGraphReference *)rootGraphReference;
-(void)setRootGraphReference:(MAGraphReference *)arg1 ;
@end
