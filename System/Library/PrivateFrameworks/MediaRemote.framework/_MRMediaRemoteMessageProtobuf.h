/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioFadeMessageProtobuf, _MRAudioFadeResponseMessageProtobuf, NSString, _MRClientUpdatesConfigurationProtobuf, _MRSetConnectionStateMessageProtobuf, _MRPlaybackQueueProtobuf, _MRCryptoPairingMessageProtobuf, _MRDeviceInfoMessageProtobuf, _MRSetDiscoveryModeProtobufMessage, _MRGameControllerMessageProtobuf, _MRGameControllerPropertiesMessageProtobuf, _MRGenericMessageProtobuf, _MRGetKeyboardSessionProtobuf, _MRGetRemoteTextInputSessionProtobuf, _MRGetStateMessageProtobuf, _MRGetVoiceInputDevicesMessageProtobuf, _MRGetVoiceInputDevicesResponseMessageProtobuf, _MRGetVolumeControlCapabilitiesMessageProtobuf, _MRGetVolumeControlCapabilitiesResultMessageProtobuf, _MRGetVolumeMessageProtobuf, _MRGetVolumeResultMessageProtobuf, _MRKeyboardMessageProtobuf, _MRVolumeControlAvailabilityProtobuf, _MRAVModifyOutputContextRequestProtobuf, _MRNotificationMessageProtobuf, _MROriginClientPropertiesMessageProtobuf, _MRPlaybackQueueRequestProtobuf, _MRPlaybackSessionMigrateBeginMessageProtobuf, _MRPlaybackSessionMigrateEndMessageProtobuf, _MRPlaybackSessionMigrateRequestMessageProtobuf, _MRPlaybackSessionMigrateResponseMessageProtobuf, _MRPlaybackSessionRequestMessageProtobuf, _MRPlaybackSessionResponseMessageProtobuf, _MRPlayerClientPropertiesMessageProtobuf, _MRPresentRouteAuthorizationStatusMessageProtobuf, _MRPromptForRouteAuthorizationMessageProtobuf, _MRPromptForRouteAuthorizationResponseMessageProtobuf, _MRSetReadyStateMessageProtobuf, _MRRegisterForGameControllerEventsMessageProtobuf, _MRRegisterGameControllerMessageProtobuf, _MRRegisterGameControllerResponseMessageProtobuf, _MRRegisterHIDDeviceMessageProtobuf, _MRRegisterHIDDeviceResultMessageProtobuf, _MRRegisterVoiceInputDeviceMessageProtobuf, _MRRegisterVoiceInputDeviceResponseMessageProtobuf, _MRRemoteTextInputMessageProtobuf, _MRRemoveClientMessageProtobuf, _MRRemoveEndpointsMessageProtobuf, _MRRemoveOutputDevicesMessageProtobuf, _MRRemovePlayerMessageProtobuf, _MRSendButtonEventMessageProtobuf, _MRSendCommandMessageProtobuf, _MRSendCommandResultMessageProtobuf, _MRSendHIDEventMessageProtobuf, _MRSendHIDReportMessageProtobuf, _MRSendLyricsEventMessageProtobuf, _MRSendPackedVirtualTouchEventMessageProtobuf, _MRSendVirtualTouchEventMessageProtobuf, _MRSendVoiceInputMessageProtobuf, _MRSetArtworkMessageProtobuf, _MRSetStateMessageProtobuf, _MRSetHiliteModeMessageProtobuf, _MRSetNowPlayingClientMessageProtobuf, _MRSetNowPlayingPlayerMessageProtobuf, _MRSetRecordingStateMessageProtobuf, _MRSetVolumeMessageProtobuf, _MRTextInputMessageProtobuf, _MRTransactionMessageProtobuf, _MRUnregisterGameControllerMessageProtobuf, _MRUpdateActiveSystemEndpointMessageProtobuf, _MRUpdateClientMessageProtobuf, _MRUpdateContentItemArtworkMessageProtobuf, _MRUpdateContentItemMessageProtobuf, _MRUpdateEndpointsMessageProtobuf, _MRUpdateOutputDevicesMessageProtobuf, _MRUpdatePlayerMessageProtobuf, _MRVolumeControlCapabilitiesDidChangeMessageProtobuf, _MRVolumeDidChangeMessageProtobuf, _MRWakeDeviceMessageProtobuf;

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	_MRAudioFadeMessageProtobuf* _audioFadeMessage;
	_MRAudioFadeResponseMessageProtobuf* _audioFadeResponseMessage;
	NSString* _authenticationToken;
	_MRClientUpdatesConfigurationProtobuf* _clientUpdatesConfigMessage;
	_MRSetConnectionStateMessageProtobuf* _connectionState;
	_MRPlaybackQueueProtobuf* _contentItemsChangedNotificationMessage;
	_MRCryptoPairingMessageProtobuf* _cryptoPairingMessage;
	_MRDeviceInfoMessageProtobuf* _deviceInfoMessage;
	_MRSetDiscoveryModeProtobufMessage* _discoveryModeMessage;
	unsigned _errorCode;
	NSString* _errorDescription;
	_MRGameControllerMessageProtobuf* _gameController;
	_MRGameControllerPropertiesMessageProtobuf* _gameControllerProperties;
	_MRGenericMessageProtobuf* _genericMessage;
	_MRGetKeyboardSessionProtobuf* _getKeyboardMessage;
	_MRGetRemoteTextInputSessionProtobuf* _getRemoteTextInputSessionMessage;
	_MRGetStateMessageProtobuf* _getStateMessage;
	_MRGetVoiceInputDevicesMessageProtobuf* _getVoiceInputDevicesMessage;
	_MRGetVoiceInputDevicesResponseMessageProtobuf* _getVoiceInputDevicesResponseMessage;
	_MRGetVolumeControlCapabilitiesMessageProtobuf* _getVolumeControlCapabilitiesMessage;
	_MRGetVolumeControlCapabilitiesResultMessageProtobuf* _getVolumeControlCapabilitiesResultMessage;
	_MRGetVolumeMessageProtobuf* _getVolumeMessage;
	_MRGetVolumeResultMessageProtobuf* _getVolumeResultMessage;
	NSString* _identifier;
	_MRKeyboardMessageProtobuf* _keyboardMessage;
	_MRVolumeControlAvailabilityProtobuf* _masterVolumeControlCapabilitiesDidChangeMessage;
	_MRAVModifyOutputContextRequestProtobuf* _modifyOutputContextRequestMessage;
	_MRNotificationMessageProtobuf* _notificationMessage;
	_MROriginClientPropertiesMessageProtobuf* _originClientPropertiesMessage;
	_MRPlaybackQueueRequestProtobuf* _playbackQueueRequest;
	_MRPlaybackSessionMigrateBeginMessageProtobuf* _playbackSessionMigrateBeginMessage;
	_MRPlaybackSessionMigrateEndMessageProtobuf* _playbackSessionMigrateEndMessage;
	_MRPlaybackSessionMigrateRequestMessageProtobuf* _playbackSessionMigrateRequestMessage;
	_MRPlaybackSessionMigrateResponseMessageProtobuf* _playbackSessionMigrateResponseMessage;
	_MRPlaybackSessionRequestMessageProtobuf* _playbackSessionRequestMessage;
	_MRPlaybackSessionResponseMessageProtobuf* _playbackSessionResponseMessage;
	_MRPlayerClientPropertiesMessageProtobuf* _playerClientPropertiesMessage;
	_MRPresentRouteAuthorizationStatusMessageProtobuf* _presentRouteAuthorizationStatusMessage;
	_MRPromptForRouteAuthorizationMessageProtobuf* _promptForRouteAuthorizationMessage;
	_MRPromptForRouteAuthorizationResponseMessageProtobuf* _promptForRouteAuthorizationResponseMessage;
	_MRSetReadyStateMessageProtobuf* _readyStateMessage;
	_MRRegisterForGameControllerEventsMessageProtobuf* _registerForGameControllerEvents;
	_MRRegisterGameControllerMessageProtobuf* _registerGameController;
	_MRRegisterGameControllerResponseMessageProtobuf* _registerGameControllerResponse;
	_MRRegisterHIDDeviceMessageProtobuf* _registerHIDDeviceMessage;
	_MRRegisterHIDDeviceResultMessageProtobuf* _registerHIDDeviceResultMessage;
	_MRRegisterVoiceInputDeviceMessageProtobuf* _registerVoiceInputDeviceMessage;
	_MRRegisterVoiceInputDeviceResponseMessageProtobuf* _registerVoiceInputDeviceResponseMessage;
	_MRRemoteTextInputMessageProtobuf* _remoteTextInputMessage;
	_MRRemoveClientMessageProtobuf* _removeClientMessage;
	_MRRemoveEndpointsMessageProtobuf* _removeEndpointsMessage;
	_MRRemoveOutputDevicesMessageProtobuf* _removeOutputDevicesMessage;
	_MRRemovePlayerMessageProtobuf* _removePlayerMessage;
	_MRSendButtonEventMessageProtobuf* _sendButtonEventMessage;
	_MRSendCommandMessageProtobuf* _sendCommandMessage;
	_MRSendCommandResultMessageProtobuf* _sendCommandResultMessage;
	_MRSendHIDEventMessageProtobuf* _sendHIDEventMessage;
	_MRSendHIDReportMessageProtobuf* _sendHIDReportMessage;
	_MRSendLyricsEventMessageProtobuf* _sendLyricsEventMessage;
	_MRSendPackedVirtualTouchEventMessageProtobuf* _sendPackedVirtualTouchEventMessage;
	_MRSendVirtualTouchEventMessageProtobuf* _sendVirtualTouchEventMessage;
	_MRSendVoiceInputMessageProtobuf* _sendVoiceInputMessage;
	_MRSetArtworkMessageProtobuf* _setArtworkMessage;
	_MRSetStateMessageProtobuf* _setDefaultSupportedCommandsMessage;
	_MRSetHiliteModeMessageProtobuf* _setHiliteModeMessage;
	_MRSetNowPlayingClientMessageProtobuf* _setNowPlayingClientMessage;
	_MRSetNowPlayingPlayerMessageProtobuf* _setNowPlayingPlayerMessage;
	_MRSetRecordingStateMessageProtobuf* _setRecordingStateMessage;
	_MRSetStateMessageProtobuf* _setStateMessage;
	_MRSetVolumeMessageProtobuf* _setVolumeMessage;
	_MRTextInputMessageProtobuf* _textInputMessage;
	_MRTransactionMessageProtobuf* _transactionPackets;
	int _type;
	NSString* _uniqueIdentifier;
	_MRUnregisterGameControllerMessageProtobuf* _unregisterGameController;
	_MRUpdateActiveSystemEndpointMessageProtobuf* _updateActiveSystemEndpointMessage;
	_MRUpdateClientMessageProtobuf* _updateClientMessage;
	_MRUpdateContentItemArtworkMessageProtobuf* _updateContentItemArtworkMessage;
	_MRUpdateContentItemMessageProtobuf* _updateContentItemMessage;
	_MRUpdateEndpointsMessageProtobuf* _updateEndpointsMessage;
	_MRUpdateOutputDevicesMessageProtobuf* _updateOutputDevicesMessage;
	_MRUpdatePlayerMessageProtobuf* _updatePlayerMessage;
	_MRVolumeControlCapabilitiesDidChangeMessageProtobuf* _volumeControlCapabilitiesDidChangeMessage;
	_MRVolumeDidChangeMessageProtobuf* _volumeDidChangeMessage;
	_MRWakeDeviceMessageProtobuf* _wakeDeviceMessage;
	SCD_Struct_MR6 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

