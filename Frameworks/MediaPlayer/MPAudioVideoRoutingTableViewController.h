/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "MPAudioDeviceControllerDelegate-Protocol.h"

@class MPAudioDeviceController, NSArray;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAudioDeviceControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    MPAudioDeviceController *_audioDeviceController;
    unsigned int _avItemType;
    BOOL _displayMirroringRoutes;
    NSArray *_displayedRoutes;
    BOOL _wirelessDisplayCapableRouteIsPicked;
    BOOL _wirelessDisplayRouteIsPendingAsPicked;
}

+ (id)routesPreferringMirroring;
@property(readonly, nonatomic) MPAudioDeviceController *audioDeviceController; // @synthesize audioDeviceController=_audioDeviceController;
- (void).cxx_destruct;
- (BOOL)_wirelessDisplayCapableRouteIsPicked;
- (id)_pickedRoute;
- (id)_effectivePickedRouteReturningActualPickedRouteType:(int *)arg1;
- (id)_displayedRoutes;
- (id)_availableRoutes;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (void)_debugButtonAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1 displayMirroringRoutes:(BOOL)arg2;

@end

