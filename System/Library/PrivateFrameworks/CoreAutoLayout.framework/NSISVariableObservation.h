/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSISVariable;

@interface NSISVariableObservation : NSObject {

	NSISVariable* _variable;
	double _lastValue;
	BOOL _valueIsDirtied;

}
-(void)dealloc;
-(id)initWithVariable:(id)arg1 ;
-(void)emitValueIfNeededWithEngine:(id)arg1 ;
-(void)valueWasDirtied;
@end

