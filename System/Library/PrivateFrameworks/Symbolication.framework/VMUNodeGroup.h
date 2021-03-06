/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VMUNodeGroup : NSObject {

	void* _group;
	unsigned _nodeNamespaceSize;
	unsigned _count;
	unsigned _singleNode;
	unsigned _inlineNodes[16];
	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(long long)count;
-(void)addNode:(unsigned)arg1 ;
-(void*)nodes;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)_createGroup;
-(id)initWithName:(id)arg1 graph:(id)arg2 ;
@end

