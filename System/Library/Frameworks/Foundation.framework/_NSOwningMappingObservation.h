/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/_NSConcreteObservation.h>
#import <libobjc.A.dylib/NSOwningObserver.h>
#import <libobjc.A.dylib/NSObservable.h>

@class NSObservation, NSString;

@interface _NSOwningMappingObservation : _NSConcreteObservation <NSOwningObserver, NSObservable> {

	NSObservation* _ownedObservation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObservation:(id)arg1 ;
@end

