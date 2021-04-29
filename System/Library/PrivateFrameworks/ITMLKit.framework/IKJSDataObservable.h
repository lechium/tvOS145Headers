/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSDataObservable.h>

@protocol IKJSDataObservable <JSExport>
@required
-(void)touchPropertyPath:(id)arg1;
-(void)setPropertyPath:(id)arg1 :(id)arg2;
-(id)getPropertyPath:(id)arg1;

@end


@class JSManagedValue, NSMutableArray, _IKJSDataDictionaryExporter, NSArray, JSValue;

@interface IKJSDataObservable : IKJSEventListenerObject <IKJSDataObservable> {

	JSManagedValue* _managedTargetValue;
	NSMutableArray* _observerRecords;
	_IKJSDataDictionaryExporter* _exporter;
	BOOL _isBoxed;
	BOOL _observersEnabled;
	IKJSDataObservable* _parent;
	NSArray* _parentAccessorSequence;

}

@property (nonatomic,copy,readonly) NSArray * parentAccessorSequence;              //@synthesize parentAccessorSequence=_parentAccessorSequence - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataObservable * parent;                 //@synthesize parent=_parent - In the implementation block
@property (nonatomic,__weak,readonly) JSValue * targetValue; 
@property (nonatomic,readonly) BOOL isBoxed;                                       //@synthesize isBoxed=_isBoxed - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (assign,nonatomic) BOOL observersEnabled;                                //@synthesize observersEnabled=_observersEnabled - In the implementation block
+(id)toDataObservable:(id)arg1 proxy:(id*)arg2 ;
+(id)_proxyHandlerForValue:(id)arg1 boxed:(BOOL)arg2 context:(id)arg3 ;
+(id)toDataObservable:(id)arg1 ;
+(id)jsExportedProperties;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(IKJSDataObservable *)parent;
-(BOOL)isPlaceholder;
-(id)valueForPropertyPath:(id)arg1 boxed:(BOOL)arg2 ;
-(id)dataDictionaryObject;
-(NSArray *)parentAccessorSequence;
-(JSValue *)targetValue;
-(void)touchPropertyPath:(id)arg1 ;
-(id)_initWithTargetValue:(id)arg1 boxed:(BOOL)arg2 ;
-(id)exportValue;
-(void)_updateValueAtPropertyPath:(id)arg1 touch:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 forPropertyPath:(id)arg2 ;
-(id)valueForAccessorSequence:(id)arg1 closestParent:(id*)arg2 accessorSequenceFromClosestParent:(id*)arg3 ;
-(void)touchPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(BOOL)isBoxed;
-(BOOL)observersEnabled;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(void)setParent:(id)arg1 accessorSequence:(id)arg2 ;
-(void)setPropertyPath:(id)arg1 :(id)arg2 ;
-(id)getPropertyPath:(id)arg1 ;
-(void)resetValueForPropertyPath:(id)arg1 ;
-(void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2 ;
-(id)initWithTargetValue:(id)arg1 ;
-(void)setTargetValue:(JSValue *)arg1 ;
-(void)setObserversEnabled:(BOOL)arg1 ;
@end

