/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, CKVMutableItem;

@interface CKVItemBuilder : NSObject {

	NSMutableArray* _fields;
	CKVMutableItem* _mutableItem;

}
-(id)init;
-(id)initWithItemType:(long long)arg1 itemId:(id)arg2 error:(id*)arg3 ;
-(id)addFieldWithType:(long long)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)buildBufferWithError:(id*)arg1 ;
-(id)addFieldWithType:(long long)arg1 label:(id)arg2 value:(id)arg3 error:(id*)arg4 ;
@end

