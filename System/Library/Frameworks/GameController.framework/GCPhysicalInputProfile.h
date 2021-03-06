/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/GCNamedProfile.h>
#import <libobjc.A.dylib/GCControllerComponent.h>

@protocol GCDevice, NSObjectNSCopyingNSSecureCoding;
@class GCController, GCMotion, GCControllerElement, GCControllerSettings, NSMutableDictionary, NSMutableSet, NSString;

@interface GCPhysicalInputProfile : NSObject <GCNamedProfile, GCControllerComponent> {

	GCController* _controller;
	id<GCDevice> _device;
	GCMotion* _motion;
	GCControllerElement* _remappedElements[41];
	GCControllerSettings* _appliedSettings;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	double _lastEventTimestamp;
	NSMutableDictionary* _elements;
	NSMutableDictionary* _buttons;
	NSMutableDictionary* _axes;
	NSMutableDictionary* _dpads;
	NSMutableSet* _allElements;
	NSMutableSet* _allButtons;
	NSMutableSet* _allAxes;
	NSMutableSet* _allDpads;
	GCControllerSettings* _bundleSettings;
	GCControllerSettings* _defaultSettings;
	NSMutableSet* __topLevelElements;
	NSMutableSet* __topLevelButtons;
	NSMutableSet* __topLevelDirectionPads;
	NSMutableSet* __topLevelTouchpads;

}

@property (readonly) NSString * name; 
@property (retain) GCMotion * _motion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GCControllerSettings * bundleSettings;                   //@synthesize bundleSettings=_bundleSettings - In the implementation block
@property (nonatomic,retain) GCControllerSettings * defaultSettings;                  //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elements;                          //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buttons;                           //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * axes;                              //@synthesize axes=_axes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dpads;                             //@synthesize dpads=_dpads - In the implementation block
@property (nonatomic,retain) NSMutableSet * allElements;                              //@synthesize allElements=_allElements - In the implementation block
@property (nonatomic,retain) NSMutableSet * allButtons;                               //@synthesize allButtons=_allButtons - In the implementation block
@property (nonatomic,retain) NSMutableSet * allAxes;                                  //@synthesize allAxes=_allAxes - In the implementation block
@property (nonatomic,retain) NSMutableSet * allDpads;                                 //@synthesize allDpads=_allDpads - In the implementation block
@property (assign) double lastEventTimestamp;                                         //@synthesize lastEventTimestamp=_lastEventTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableSet * _topLevelElements;                        //@synthesize _topLevelElements=__topLevelElements - In the implementation block
@property (nonatomic,retain) NSMutableSet * _topLevelButtons;                         //@synthesize _topLevelButtons=__topLevelButtons - In the implementation block
@property (nonatomic,retain) NSMutableSet * _topLevelDirectionPads;                   //@synthesize _topLevelDirectionPads=__topLevelDirectionPads - In the implementation block
@property (nonatomic,retain) NSMutableSet * _topLevelTouchpads;                       //@synthesize _topLevelTouchpads=__topLevelTouchpads - In the implementation block
@property (nonatomic,__weak,readonly) GCController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) id<GCDevice> device; 
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(NSMutableDictionary *)elements;
-(id)initWithIdentifier:(id)arg1 ;
-(id<GCDevice>)device;
-(void)setDevice:(id<GCDevice>)arg1 ;
-(void)applySettings:(id)arg1 ;
-(id)capture;
-(void)setElements:(NSMutableDictionary *)arg1 ;
-(GCControllerSettings *)defaultSettings;
-(NSMutableDictionary *)buttons;
-(void)setButtons:(NSMutableDictionary *)arg1 ;
-(unsigned)sampleRate;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(GCMotion *)_motion;
-(NSMutableDictionary *)axes;
-(id)initWithController:(id)arg1 ;
-(id)_buttonWithInfo:(SCD_Struct_GC16)arg1 ;
-(id)_directionPadWithInfo:(SCD_Struct_GC16)arg1 ;
-(id)productCategory;
-(/*^block*/id)valueChangedHandler;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(void)set_motion:(GCMotion *)arg1 ;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(id)_cursorWithInfo:(SCD_Struct_GC16)arg1 ;
-(void)_receivedEvent;
-(id)remappedElementForIndex:(long long)arg1 ;
-(void)setDefaultSettings:(id)arg1 bundleSettings:(id)arg2 ;
-(void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2 ;
-(void)setLastEventTimestamp:(double)arg1 ;
-(double)lastEventTimestamp;
-(NSMutableSet *)allElements;
-(id)_keyboardButtonWithInfo:(SCD_Struct_GC16)arg1 ;
-(void)updateElementControllerReferences;
-(NSMutableSet *)allButtons;
-(NSMutableSet *)_topLevelButtons;
-(NSMutableSet *)_topLevelDirectionPads;
-(void)_registerTopLevelDirectionPad:(id)arg1 ;
-(void)_registerTopLevelButton:(id)arg1 ;
-(void)_registerTouchpad:(id)arg1 ;
-(void)_registerButton:(id)arg1 ;
-(void)_registerDirectionPad:(id)arg1 ;
-(void)_registerAxis:(id)arg1 ;
-(NSMutableSet *)allAxes;
-(NSMutableSet *)allDpads;
-(NSMutableDictionary *)dpads;
-(id)_touchpadWithInfo:(SCD_Struct_GC16)arg1 ;
-(void)_registerTopLevelTouchpad:(id)arg1 ;
-(void)setStateFromPhysicalInput:(id)arg1 ;
-(void)setAxes:(NSMutableDictionary *)arg1 ;
-(void)setDpads:(NSMutableDictionary *)arg1 ;
-(void)setAllElements:(NSMutableSet *)arg1 ;
-(void)setAllButtons:(NSMutableSet *)arg1 ;
-(void)setAllAxes:(NSMutableSet *)arg1 ;
-(void)setAllDpads:(NSMutableSet *)arg1 ;
-(GCControllerSettings *)bundleSettings;
-(void)setBundleSettings:(GCControllerSettings *)arg1 ;
-(void)setDefaultSettings:(GCControllerSettings *)arg1 ;
-(NSMutableSet *)_topLevelElements;
-(void)set_topLevelElements:(NSMutableSet *)arg1 ;
-(void)set_topLevelButtons:(NSMutableSet *)arg1 ;
-(void)set_topLevelDirectionPads:(NSMutableSet *)arg1 ;
-(NSMutableSet *)_topLevelTouchpads;
-(void)set_topLevelTouchpads:(NSMutableSet *)arg1 ;
@end

