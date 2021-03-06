/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSBoundKeyPath.h>
#import <libobjc.A.dylib/NSObservable.h>

@class NSString;

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>

@property (readonly) id<NSObservable> changes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)addObserver:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(id<NSObservable>)changes;
-(BOOL)_wantsChanges;
@end

