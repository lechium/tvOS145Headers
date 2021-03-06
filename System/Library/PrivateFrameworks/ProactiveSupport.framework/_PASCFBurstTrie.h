/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASCFBurstTrie : NSObject {

	CFBurstTrieRef _trie;

}
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 range:(NSRange)arg2 ;
-(unsigned)payloadForUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)runBlockWithTrie:(/*^block*/id)arg1 ;
@end

