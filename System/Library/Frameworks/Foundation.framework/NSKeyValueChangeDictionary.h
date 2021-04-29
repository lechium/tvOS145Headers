/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS65 _details;
	NSObject* _originalObservable;
	BOOL _isPriorNotification;
	BOOL _isRetainingObjects;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)setOriginalObservable:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS66)arg1 originalObservable:(id)arg2 ;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS66)arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3 ;
-(void)retainObjects;
@end

