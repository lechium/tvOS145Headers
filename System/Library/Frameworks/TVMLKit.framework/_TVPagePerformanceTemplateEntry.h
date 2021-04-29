/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, IKViewElement, NSString, _TVPagePerformanceController;

@interface _TVPagePerformanceTemplateEntry : NSObject {

	NSHashTable* _initialOnScreenImageProxies;
	BOOL _listeningForImageProxyWillLoad;
	BOOL _listeningForImageProxyDidLoad;
	IKViewElement* _templateElement;
	NSString* _templateElementName;
	unsigned long long _templateUpdateCount;
	unsigned long long _templateWillRender;
	unsigned long long _templateDidRender;
	unsigned long long _templateWillTransition;
	unsigned long long _templateDidTransition;
	unsigned long long _templateWillLoadResources;
	unsigned long long _templateDidLoadResources;
	unsigned long long _templateWillLoadFirstImageProxy;
	unsigned long long _templateDidLoadLastImageProxy;
	_TVPagePerformanceController* _performanceController;

}

@property (assign,nonatomic,__weak) IKViewElement * templateElement;                                   //@synthesize templateElement=_templateElement - In the implementation block
@property (nonatomic,copy) NSString * templateElementName;                                             //@synthesize templateElementName=_templateElementName - In the implementation block
@property (assign,nonatomic) unsigned long long templateUpdateCount;                                   //@synthesize templateUpdateCount=_templateUpdateCount - In the implementation block
@property (assign,nonatomic) unsigned long long templateWillRender;                                    //@synthesize templateWillRender=_templateWillRender - In the implementation block
@property (assign,nonatomic) unsigned long long templateDidRender;                                     //@synthesize templateDidRender=_templateDidRender - In the implementation block
@property (assign,nonatomic) unsigned long long templateWillTransition;                                //@synthesize templateWillTransition=_templateWillTransition - In the implementation block
@property (assign,nonatomic) unsigned long long templateDidTransition;                                 //@synthesize templateDidTransition=_templateDidTransition - In the implementation block
@property (assign,nonatomic) unsigned long long templateWillLoadResources;                             //@synthesize templateWillLoadResources=_templateWillLoadResources - In the implementation block
@property (assign,nonatomic) unsigned long long templateDidLoadResources;                              //@synthesize templateDidLoadResources=_templateDidLoadResources - In the implementation block
@property (assign,nonatomic) unsigned long long templateWillLoadFirstImageProxy;                       //@synthesize templateWillLoadFirstImageProxy=_templateWillLoadFirstImageProxy - In the implementation block
@property (assign,nonatomic) unsigned long long templateDidLoadLastImageProxy;                         //@synthesize templateDidLoadLastImageProxy=_templateDidLoadLastImageProxy - In the implementation block
@property (nonatomic,readonly) unsigned long long templateRenderDuration; 
@property (nonatomic,readonly) unsigned long long templateResourcesDuration; 
@property (nonatomic,readonly) unsigned long long templateTransitionDuration; 
@property (assign,nonatomic,__weak) _TVPagePerformanceController * performanceController;              //@synthesize performanceController=_performanceController - In the implementation block
-(void)dealloc;
-(IKViewElement *)templateElement;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(void)markTemplateWillRender;
-(void)markTemplateDidRender;
-(void)markTemplateWillTransition;
-(void)markTemplateDidTransition;
-(void)setPerformanceController:(_TVPagePerformanceController *)arg1 ;
-(void)setTemplateElementName:(NSString *)arg1 ;
-(void)_stopListeningForInitialImageProxyLoadNotifications;
-(NSString *)templateElementName;
-(void)setTemplateWillRender:(unsigned long long)arg1 ;
-(void)_beginListeningForInitialImageProxyLoadNotifications;
-(void)setTemplateDidRender:(unsigned long long)arg1 ;
-(unsigned long long)templateWillTransition;
-(void)setTemplateWillTransition:(unsigned long long)arg1 ;
-(unsigned long long)templateDidTransition;
-(void)setTemplateDidTransition:(unsigned long long)arg1 ;
-(void)_maybeStopListeningForInitialImageProxyLoadNotifications;
-(unsigned long long)templateWillRender;
-(unsigned long long)templateDidRender;
-(unsigned long long)templateWillLoadResources;
-(unsigned long long)templateDidLoadResources;
-(void)setTemplateWillLoadResources:(unsigned long long)arg1 ;
-(void)_receivedImageProxyWillLoadNotification:(id)arg1 ;
-(void)_receivedImageProxyDidLoadNotification:(id)arg1 ;
-(_TVPagePerformanceController *)performanceController;
-(unsigned long long)templateUpdateCount;
-(unsigned long long)templateDidLoadLastImageProxy;
-(void)setTemplateDidLoadResources:(unsigned long long)arg1 ;
-(unsigned long long)templateWillLoadFirstImageProxy;
-(void)setTemplateWillLoadFirstImageProxy:(unsigned long long)arg1 ;
-(void)setTemplateDidLoadLastImageProxy:(unsigned long long)arg1 ;
-(id)initWithPagePerformanceController:(id)arg1 forTemplateElement:(id)arg2 ;
-(unsigned long long)templateRenderDuration;
-(unsigned long long)templateResourcesDuration;
-(unsigned long long)templateTransitionDuration;
-(void)setTemplateUpdateCount:(unsigned long long)arg1 ;
@end

