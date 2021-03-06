/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/WFMediaRoutePickerObserver.h>

@class WFMediaRoutePicker, NSString;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver> {

	WFMediaRoutePicker* _routePicker;

}

@property (nonatomic,retain) WFMediaRoutePicker * routePicker;              //@synthesize routePicker=_routePicker - In the implementation block
@property (nonatomic,readonly) long long routeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)routeType;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(BOOL)preferParameterValuePicker;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(WFMediaRoutePicker *)routePicker;
-(void)startDiscoveringRoutes;
-(void)stopDiscoveringRoutes;
-(BOOL)shouldDefaultToLocalDeviceEndpoint;
-(id)sortedStatesForAvailableRoutes:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(BOOL)hidesAccessoryIconInEditor;
-(BOOL)liveUpdatesPossibleStatesInEditor;
-(void)startLiveUpdatingPossibleStates;
-(void)stopLiveUpdatingPossibleStates;
-(void)setRoutePicker:(WFMediaRoutePicker *)arg1 ;
@end

