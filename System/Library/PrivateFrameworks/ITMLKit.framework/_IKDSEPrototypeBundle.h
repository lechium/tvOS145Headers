/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject {

	NSMutableArray* _prototypes;
	NSMutableArray* _entries;
	struct {
		BOOL areEntriesDirty;
	}  _flags;

}
-(id)init;
-(id)prototypeForItemAtIndex:(unsigned long long)arg1 ;
-(id)allPrototypes;
-(void)addPrototype:(id)arg1 forIndexes:(id)arg2 ;
@end
