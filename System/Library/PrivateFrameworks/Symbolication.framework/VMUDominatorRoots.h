/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class VMUDominatorGraph;

@interface VMUDominatorRoots : NSEnumerator {

	VMUDominatorGraph* _dg;
	unsigned _i;

}
-(id)nextObject;
-(id)initWithDominatorGraph:(id)arg1 ;
@end

