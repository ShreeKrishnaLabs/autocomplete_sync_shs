(function ($) {
  Drupal.behaviors.autocomplete_sync_shs = {
    attach: function (context, settings) {
    	$('.shs-select').each(function(){
    		    	$('.shs-select').change(function(){

    		    		    	 	$(this).addClass(Drupal.settings.autocomplete_sync_shs.shs_select);

 					});
 					    	$('.shs-select').attr('disabled','disabled');

    		$(this).addClass(Drupal.settings.autocomplete_sync_shs.shs_select);
    	});

    	$('.shs-select').change(function(){
	   	  $('.shs-select').each(function(){
    	 	$(this).addClass(Drupal.settings.autocomplete_sync_shs.shs_select);
          }) ;
        });
    }
  };
}(jQuery));