/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>

@protocol CNForkJoinResultReportingStrategy;
@class NSArray;

@interface _CNForkJoinObservable : CNObservable {

	NSArray* _observables;
	id<CNForkJoinResultReportingStrategy> _resultReportingStrategy;

}
+(id)forkJoin:(id)arg1 ;
+(id)progressiveForkJoin:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2 ;
@end

