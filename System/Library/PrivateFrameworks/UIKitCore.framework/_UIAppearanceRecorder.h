/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSMutableArray, NSData;

@interface _UIAppearanceRecorder : NSObject {

	NSString* _classNameToRecord;
	Class _superclassToRecord;
	NSArray* _containerClassNames;
	NSMutableArray* _customizations;
	NSArray* _unarchivedCustomizations;

}

@property (setter=_setClassNameToRecord:,nonatomic,copy) NSString * _classNameToRecord;                 //@synthesize classNameToRecord=_classNameToRecord - In the implementation block
@property (assign,setter=_setSuperclassToRecord:,nonatomic) Class _superclassToRecord;                  //@synthesize superclassToRecord=_superclassToRecord - In the implementation block
@property (setter=_setContainerClassNames:,nonatomic,copy) NSArray * _containerClassNames;              //@synthesize containerClassNames=_containerClassNames - In the implementation block
@property (nonatomic,readonly) NSData * _serializedRepresentation; 
+(id)_sharedAppearanceRecorder;
+(id)_sharedAppearanceRecorderForClassNamed:(id)arg1 superclass:(Class)arg2 whenContainedIn:(id)arg3 ;
+(id)_sharedAppearanceRecorderForClass:(Class)arg1 whenContainedIn:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(void)_recordInvocation:(id)arg1 withClassName:(id)arg2 containerClassNames:(id)arg3 traitCollection:(id)arg4 selectorString:(id)arg5 forRemoteProcess:(BOOL)arg6 ;
-(void)_importCustomizations:(id)arg1 withArchiveVersion:(long long)arg2 ;
-(void)_setClassNameToRecord:(id)arg1 ;
-(void)_setSuperclassToRecord:(Class)arg1 ;
-(void)_setContainerClassNames:(id)arg1 ;
-(NSString *)_classNameToRecord;
-(void)_applyCustomizations;
-(NSData *)_serializedRepresentation;
-(Class)_superclassToRecord;
-(NSArray *)_containerClassNames;
@end
